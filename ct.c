#include<stdio.h>

int main() {
    int aadhar[10];

// input
    int *ptr = &aadhar[0];
    for(int i=0; i<10; i++) {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
    }

// output
    for(int i=0; i<10; i++) {
        printf("%d index = %d \n", i, *(ptr + i));
    }

    return 0;
    }

   // traverse an array


    /*
    This C program declares an array aadhar of size 10 and then uses a pointer ptr to take input for each element of the array from the user using a loop. After that, it prints the values stored in the array using another loop.

    Here's a breakdown of the code:
    int aadhar[10];: Declares an integer array named aadhar with a size of 10.
    int *ptr = &aadhar[0];: Declares an integer pointer ptr and assigns it the address of the first element of the array aadhar.
    The first for loop (for(int i=0; i<10; i++)) is used to take input for each element of the array from the user using scanf.
    The second for loop (for(int i=0; i<10; i++)) is used to print the index and corresponding value of each element in the array using printf.
    */