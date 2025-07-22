#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "xil_types.h"
#include "xil_cache.h"
#include <stdlib.h>
#include <string.h>

extern char inbyte(void);

// === ADDR IP Core ===
#define ADDR_A      0x74400000  // Ghi A
#define ADDR_B      0x74400004  // Ghi B
#define ADDR_SELECT 0x74400008  // Ghi select (0: multiplier, 1: exponent)
#define ADDR_START  0x7440000C  // Ghi start
#define ADDR_P      0x74400010  // Đọc P
#define ADDR_DONE   0x74400014  // Đọc done

// Function prototypes
int get_input(const char* label, int max_val);
void write_input_to_ip(u32 a, u32 b, u32 select);
u32 wait_done_and_get_result();
void Delay(int delay);

int main() {
    xil_printf("\r\n=== SP605 XILINX BOARD - EXPONENT MULTIPLIER IP ===\r\n");
    u32 a, b, result, select;

    while (1) {
        // Nhập giá trị A và B
        a = get_input("A", 15);
        b = get_input("B", 15);

        // Chọn phép toán
        xil_printf("\r\nChon phep toan:\r\n");
        xil_printf("0: Nhan (A * B)\r\n");
        xil_printf("1: Luy thua (A^B)\r\n");
        select = get_input("Select", 1);

        // Ghi dữ liệu vào IP và thực hiện tính toán
        write_input_to_ip(a, b, select);
        result = wait_done_and_get_result();

        // Hiển thị kết quả
        if (select == 1) {
            xil_printf("Ket qua: %d^%d = %d\r\n", a, b, result);
        } else {
            xil_printf("Ket qua: %d * %d = %d\r\n", a, b, result);
        }

        // Reset start signal
        Xil_Out32(ADDR_START, 1);
        xil_printf("\r=======================\r\n");
    }

    return 0;
}

// === Nhập số từ UART dùng inbyte() ===
int get_input(const char* label, int max_val) {
    char buffer[12];
    int index = 0;
    char c;

    xil_printf("Nhap gia tri %s (0-%d): ", label, max_val);

    while (1) {
        c = inbyte();
        if (c == '\r') {  // Enter
            buffer[index] = '\0';
            break;
        } else if (c >= '0' && c <= '9') {
            if (index < sizeof(buffer) - 1) {
                buffer[index++] = c;
                xil_printf("%c", c);  // echo
            }
        } else if (c == '\b' || c == 127) {  // Backspace
            if (index > 0) {
                index--;
                xil_printf("\b \b");  // Xóa ký tự trên terminal
            }
        } else {
            xil_printf("\r\nKy tu khong hop le. Nhap lai: ");
            index = 0;
        }
    }

    xil_printf("\r\n");

    if (index == 0) {
        xil_printf("Khong co gia tri nao duoc nhap. Thu lai.\r\n");
        return get_input(label, max_val);
    }

    int val = atoi(buffer);
    if (val < 0 || val > max_val) {
        xil_printf("Gia tri ngoai pham vi (0-%d). Thu lai.\r\n", max_val);
        return get_input(label, max_val);
    }

    return val;
}

// === Ghi A, B, select và start xuống IP ===
void write_input_to_ip(u32 a, u32 b, u32 select) {
    // Ghi các giá trị input
    Xil_Out32(ADDR_A, a);
    Delay(10000);

    Xil_Out32(ADDR_B, b);
    Delay(10000);

    Xil_Out32(ADDR_SELECT, select);
    Delay(10000);

    // Bắt đầu tính toán
    Xil_Out32(ADDR_START, 1);
    Delay(10000);
}

// === Đợi done và đọc kết quả ===
u32 wait_done_and_get_result() {
    u32 done;
    u32 timeout = 1000000;  // Timeout counter để tránh treo

    xil_printf("Dang tinh toan...\r\n");

    do {
        done = Xil_In32(ADDR_DONE);
        timeout--;
        if (timeout == 0) {
            xil_printf("Timeout! IP khong phan hoi.\r\n");
            return 0;
        }
    } while ((done & 0x1) == 0);

    xil_printf("Tinh toan hoan tat!\r\n");
    return Xil_In32(ADDR_P);
}

// === Hàm delay đơn giản ===
void Delay(int delay) {
    volatile int i = delay;  // volatile để tránh compiler optimization
    while(i > 0) {
        i--;
    }
}
