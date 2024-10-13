#include <stdio.h>

void function() {
    register int counter; // Biến được lưu trữ trong thanh ghi
    for (counter = 0; counter < 100000; counter++) {
        // Thực hiện một số phép toán
    }
    printf("Counter: %d\n", counter);
}

int main() {
    function();
    return 0;
}
