#include<stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;                                             // pointer 'ptr' stores the address of variable 'x'
    *ptr = 0;                                             // value at address stored in ptr is 0 i.e variable 'x' stores value 0

    printf("x = %d\n", x);                                // prints the value stored in variable 'x'
    printf("*ptr = %d\n", *ptr);                          // prints the value stored in 'address which is stored in pointer ptr'

    *ptr += 5;                                            // value at address stored in pointer is increased by 5
     printf("x = %d\n", x);
     printf("*ptr = %d\n", *ptr);

     (*ptr)++;                                            // value at address stored in pointer is again increased by 1
     printf("x = %d\n", x);
     printf("*ptr = %d\n", *ptr);

    return 0;
    }



    // *ptr++ means * ptr = ptr + 1
    // (*ptr)++ means *ptr = *ptr + 1