#include <stdio.h>

static int globalVar = 10; // Biến static global

void printGlobal() {
    printf("Global Var: %d\n", globalVar);
}

int main() {
    printGlobal(); // Output: Global Var: 10
    return 0;
}
