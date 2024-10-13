#include <stdio.h>
#include <stdint.h> // Thư viện chứa uint32_t

// Khai báo struct có các thành viên là mảng và uint32_t
struct MyStruct {
    uint32_t arr1[5];   // 8 + 8 + 4 + 4 padding
    uint16_t arr2[3];   // 6 + 2 padding
     uint64_t arr3[2];  // 8 + 8
};

int main() {
    printf("Size of struct MyStruct: %lu bytes\n", sizeof(struct MyStruct));
    return 0;
}

