#include<stdio.h>

int main() {
    int a = 2, b = 3;
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    return 0;
    }