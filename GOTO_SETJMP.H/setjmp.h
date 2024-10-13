#include <stdio.h>
#include <setjmp.h>

jmp_buf buffer;

void second() {
    printf("Inside second function\n");
    longjmp(buffer, 1); // Quay lại vị trí setjmp() và trả về 1
}

void first() {
    printf("Inside first function\n");
    second();
    printf("This line will not be printed\n");
}

int main() {
    if (setjmp(buffer) == 0) {
        printf("Starting execution\n");
        first();
    } else {
        printf("Back to main after longjmp\n");
    }
    return 0;
}
