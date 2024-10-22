#include <stdio.h>

int main() {
    int num = 10;
    float pi = 3.14;
    char ch = 'A';

    // Declare pointer variables
    int *ptr_num;
    float *ptr_pi;
    char *ptr_ch;

    // Assign addresses of variables to pointers
    ptr_num = &num;
    ptr_pi = &pi;
    ptr_ch = &ch;

    // Display values and addresses using pointers
    printf("Value of num: %d, Address of num: %p\n", *ptr_num, ptr_num);
    printf("Value of pi: %.2f, Address of pi: %p\n", *ptr_pi, ptr_pi);
    printf("Value of ch: %c, Address of ch: %p\n", *ptr_ch, ptr_ch);

    return 0;
}

// C program to display the value of variables and their memory address using pointers