#include<stdio.h>

int *ptr = NULL;

void count(){
    static int a = 27;
    ptr = &a;
    a * a;
    printf("a * a = %d\n", a * a);
}

int main(int argc, char const *argv[]){
    count();
    count();
    count();
    *ptr = 12;
    count();

    return 0;

}