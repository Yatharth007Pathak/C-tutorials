#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter numbers(5) : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5; i++) {
        printf("number %d is %d \n", i, ptr[i]);
    }

    free(ptr);

    return 0;
    }


    // create an array of size 5(using calloc) and enter its values from the user

/*
our C program dynamically allocates an array of integers using calloc with an initial size of 5, prompts the user to 
input 5 numbers to fill this array, prints the indices and values of the array, and then frees the allocated memory. 
Here's a breakdown of our code:

Dynamically Allocate Initial Array:
ptr = (int *)calloc(5, sizeof(int));: Allocates memory for an array of 5 integers using calloc. The array is initialized to zero.

Input 5 Numbers:
printf("Enter numbers (5): ");: Prompts the user to input 5 numbers.
for(int i = 0; i < 5; i++) { ... }: Loops to read and store 5 numbers in the allocated array.

Print the Resulting Array:
for(int i = 0; i < 5; i++) { ... }: Loops to print the indices and values of the array.

Free Dynamically Allocated Memory:
free(ptr);: Frees the dynamically allocated memory before the program exits.
*/