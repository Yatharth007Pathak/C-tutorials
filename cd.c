#include<stdio.h>

int main() {
    
int age = 30;                        // declare an integer variable 'age' and initialize it with the value 30
int *ptr = &age;                     // pointer variable 'ptr' is declared and assigned the address of 'age' using the address-of operator &.

printf("%p \n", &age);               // prints the address of variable 'age' in hexadecimal form
printf("%u \n", &age);               // prints the address of variable 'age' in unsigned int

printf("%p \n", ptr);                // prints the address stored in pointer variable 'ptr' in hexadecimal form
printf("%u \n", ptr);                // prints the address stored in pointer variable 'ptr' in unsigned int

printf("%p \n", &ptr);               // prints the address of pointer variable 'ptr' in hexadecimal form
printf("%u \n", &ptr);               // prints the address of pointer variable 'ptr' in unsigned int

    return 0;
    }


    // The %p format specifier is used to print the address in hexadecimal form, and %u is used to print it as an unsigned integer.