#include <stdio.h>
#include <stdint.h> // Thư viện chứa uint32_t

// Khai báo struct có các thành viên là mảng và uint32_t
union MyUnion {
    uint32_t arr1[5];   // 
    uint16_t arr2[3];   // 
    uint64_t arr3[2];   // 8 + 8
};

int main() {
    printf("Size of union MyUnion: %lu bytes\n", sizeof(Union MyStruct));
    return 0;
}


