#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "xil_types.h"
#include "xil_cache.h"
#include <stdlib.h>
#include <string.h>

extern char inbyte(void);

// === ADDR IP Core ===
#define ADDR_A     0x7c900000  //  write X
#define ADDR_B     0x7c900004  //  write A
#define ADDR_START 0x7c900008  //  write start
#define ADDR_P     0x7c90000C  //  read P
#define ADDR_DONE  0x7c900010  //  read done

int get_input(const char* label, int max_val);
void write_input_to_ip(u32 a, u32 b);
u32 wait_done_and_get_result();
void Delay(int delay);

int main() {
    xil_printf("\r\n=== SP605 XILINX BOARD - HAMNHAN IP ===\r\n");

    u32 a, b, result;

    while (1) {
        a = get_input("A", 15);
        b = get_input("B", 15);

        write_input_to_ip(a, b);

        result = wait_done_and_get_result();

        xil_printf("Ket qua: %d*%d = %d\r\n", a, b, result);

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
        } else {
            xil_printf("\r\n Ky tu khong hop le. Nhap lai: ");
            index = 0;
        }
    }

    xil_printf("\r\n");

    int val = atoi(buffer);
    if (val < 0 || val > max_val) {
        xil_printf("Gia tri ngoai pham vi. Thu lai.\r\n");
        return get_input(label, max_val);
    }

    return val;
}

// === Ghi x, a, start xuống IP ===
void write_input_to_ip(u32 a, u32 b) {
    Xil_Out32(ADDR_A, a);
    Xil_Out32(ADDR_B, b);
    Xil_Out32(ADDR_START, 1);
    Delay(100000);
}

// === Đợi done và đọc kết quả ===
u32 wait_done_and_get_result() {
	u32 done;

    do {
        done = Xil_In32(ADDR_DONE);
    } while ((done & 0x1) == 0);

    return Xil_In32(ADDR_P);
}

// === Hàm delay đơn giản ===
void Delay(int delay){
	while(delay != 0){
		delay = delay - 1;
	}
}
