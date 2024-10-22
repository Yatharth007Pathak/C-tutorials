#include<stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
    }


    // In C, the sizeof operator is used to determine the size (in bytes) of a particular data type.--

    /*
    int marks[5]             memory reserved is 5*4 = 20 bytes
    float price[5]           memory reserved is 5*4 = 20 bytes
    char name[5]             memory reserved is 5*1 = 5 bytes
    */