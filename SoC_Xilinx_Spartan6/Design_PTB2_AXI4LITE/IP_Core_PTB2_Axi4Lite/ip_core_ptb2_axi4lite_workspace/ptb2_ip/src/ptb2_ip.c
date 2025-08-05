#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "xil_types.h"
#include <stdlib.h>
#include <string.h>

extern char inbyte(void);

// === ADDR IP Core ===
#define ADDR_A         0x79c00000  // Ghi A
#define ADDR_B         0x79c00004  // Ghi B
#define ADDR_C         0x79c00008  // Ghi C
#define ADDR_READ_EN   0x79c0000C  // Ghi read enable
#define ADDR_RESULT    0x79c00010  // Đọc o_result
#define ADDR_DATA_OUT  0x79c00014  // Đọc o_data

// Result status definitions
#define RESULT_NOT_COMPUTED    0b00
#define RESULT_NO_ROOTS        0b01
#define RESULT_ONE_ROOT        0b10
#define RESULT_TWO_ROOTS       0b11

// Function prototypes
int get_input(const char* label, int min_val, int max_val);
void write_coefficients_to_ip(int a, int b, int c);
u32 read_result_status(void);
int read_root_value(void);
void Delay(int delay);
int sign_extend_4bit(u32 data);

int main() {
    xil_printf("\r\n=== SP605 XILINX BOARD - GIAI PHUONG TRINH BAC 2 ===\r\n");

    int a, b, c;
    u32 result_status;
    int root1, root2;

    while (1) {
        // Nhập hệ số a (không được bằng 0)
        do {
            a = get_input("He so a", -15, 15);
            if (a == 0) {
                xil_printf("Loi: He so 'a' khong the bang 0 (khong phai phuong trinh bac 2)\r\n");
            }
        } while (a == 0);

        // Nhập hệ số b và c
        b = get_input("He so b", -15, 15);
        c = get_input("He so c", -15, 15);

        xil_printf("\r\nPhuong trinh: %dx^2 + %dx + %d = 0\r\n", a, b, c);

        // Ghi hệ số xuống IP core
        write_coefficients_to_ip(a, b, c);

        // Đọc trạng thái kết quả
        result_status = read_result_status();

        xil_printf("Trang thai ket qua: ");
        switch (result_status & 0x3) { // chỉ giữ lại 2 bit cuối
            case RESULT_NOT_COMPUTED:
                xil_printf("Chua tinh toan xong\r\n");
				Delay(1000000);
                break;

            case RESULT_NO_ROOTS:
                xil_printf("Vo nghiem (delta < 0)\r\n");
				Delay(1000000);
                break;

            case RESULT_ONE_ROOT:
                xil_printf("Nghiem kep (delta = 0)\r\n");

                // Đọc nghiệm kép
                Xil_Out32(ADDR_READ_EN, 1);
                Delay(1000000);
                root1 = read_root_value();
				
                xil_printf("Nghiem kep: x = %d\r\n", root1);

                Delay(1000000);
				Xil_Out32(ADDR_READ_EN, 1);

                break;

            case RESULT_TWO_ROOTS:
                xil_printf("Hai nghiem phan biet (delta > 0)\r\n");

                // Đọc nghiệm thứ nhất
                Xil_Out32(ADDR_READ_EN, 1);
                Delay(1000000);
                root1 = read_root_value();

                // Đọc nghiệm thứ hai
                Delay(1000000);
                Xil_Out32(ADDR_READ_EN, 1);
                Delay(1000000);
                root2 = read_root_value();

                xil_printf("Nghiem: x = %d hoac x = %d\r\n", root1, root2);

                Delay(1000000);
				Xil_Out32(ADDR_READ_EN, 1);

                break;

            default:
                xil_printf("Trang thai khong xac dinh: 0x%08X\r\n", result_status);
                break;
        }

        xil_printf("\r\n========================\r\n");
    }

    return 0;
}

// === Nhập số từ UART dùng inbyte() ===
int get_input(const char* label, int min_val, int max_val) {
    char buffer[12];
    int index = 0;
    char c;
    xil_printf("Nhap gia tri %s (%d den %d): ", label, min_val, max_val);

    while (1) {
        c = inbyte();
        if (c == '\r') {  // Enter
            buffer[index] = '\0';
            break;
        } else if ((c >= '0' && c <= '9') || (c == '-' && index == 0)) {
            if (index < sizeof(buffer) - 1) {
                buffer[index++] = c;
                xil_printf("%c", c);  // echo
            }
        } else {
            xil_printf("\r\nKy tu khong hop le. Nhap lai: ");
            index = 0;
        }
    }
    xil_printf("\r\n");

    int val = atoi(buffer);
    if (val < min_val || val > max_val) {
        xil_printf("Gia tri ngoai pham vi (%d den %d). Thu lai.\r\n", min_val, max_val);
        return get_input(label, min_val, max_val);
    }
    return val;
}

// === Ghi hệ số A, B, C xuống IP ===
void write_coefficients_to_ip(int a, int b, int c) {
    xil_printf("Dang ghi he so xuong IP core...\r\n");

    // Ghi hệ số A, B, C theo thứ tự
    Xil_Out32(ADDR_A, (u32)(a & 0x1F));  // 5-bit signed
    Delay(1000000);

    Xil_Out32(ADDR_B, (u32)(b & 0x1F));  // 5-bit signed
    Delay(1000000);

    Xil_Out32(ADDR_C, (u32)(c & 0x1F));  // 5-bit signed
    Delay(1000000);

    xil_printf("Da ghi: A=%d, B=%d, C=%d\r\n", a, b, c);

    // Chờ IP core tính toán
    xil_printf("Dang tinh toan...\r\n");
    Delay(1000000);  // Delay lâu hơn để IP core hoàn thành tính toán
}

// === Đọc trạng thái kết quả ===
u32 read_result_status(void) {
    u32 result = Xil_In32(ADDR_RESULT);
    Delay(1000000);
    return result;
}

// === Đọc giá trị nghiệm ===
int read_root_value(void) {
    u32 data = Xil_In32(ADDR_DATA_OUT);
    Delay(10000000);
    return sign_extend_4bit(data);
}

// === Sign extend 4-bit thành 32-bit ===
int sign_extend_4bit(u32 data) {
    // Extract 4-bit data và sign extend thành 32-bit
    int result = (int)(data & 0xF); // 0xF = 0b1111 - chỉ lấy 4 bit cuối

    // Kiểm tra bit dấu (bit 3)
    if (result & 0x8) {
        result |= 0xFFFFFFF0;  // Sign extend
    }

    return result;
}

// === Hàm delay đơn giản ===
void Delay(int delay) {
    while (delay != 0) {
        delay = delay - 1;
    }
}
