#include <stdio.h>

volatile int interruptFlag = 0; // Biến có thể thay đổi bởi interrupt

void interruptHandler() {
    interruptFlag = 1; // Thay đổi giá trị của biến
}

int main() {
    while (!interruptFlag) {
        // Chờ đợi interrupt
    }
    printf("Interrupt occurred!\n");
    return 0;
}
