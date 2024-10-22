#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter numbers(5) : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);
    }

     ptr = realloc(ptr, 8);

    printf("enter numbers(8) : ");
    for(int i=0; i<8; i++) {
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++) {
        printf("number %d is %d \n", i, ptr[i]);
    }

    free(ptr);
    
    return 0;
    }



/*
realloc()         reallocate memory
reallocate (increase or decrease) memory using the same pointer and size
syntax :- realloc(ptr, newSize);
*/


    // allocate memory for 5 numbers, then dynamically increase it to 8 numbers

/*
our C program dynamically allocates an array of integers using calloc with an initial size of 5, 
prompts the user to input 5 numbers to fill this array, then uses realloc to resize the array to 8 elements 
and prompts the user to input 3 more numbers. Finally, it prints the indices and values of the resulting array. 
Here's a breakdown of our code:

Dynamically Allocate Initial Array:
ptr = (int *)calloc(5, sizeof(int));: Allocates memory for an array of 5 integers using calloc. The array is initialized to zero.

Input 5 Numbers:
printf("Enter numbers (5): ");: Prompts the user to input 5 numbers.
for(int i = 0; i < 5; i++) { ... }: Loops to read and store 5 numbers in the allocated array.

Resize the Array Using realloc:
ptr = realloc(ptr, 8);: Resizes the array to 8 elements using realloc.

Input 3 More Numbers:
printf("Enter numbers (8): ");: Prompts the user to input 3 more numbers.
for(int i = 5; i < 8; i++) { ... }: Loops to read and store 3 numbers in the resized array.

Print the Resulting Array:
for(int i = 0; i < 8; i++) { ... }: Loops to print the indices and values of the resulting array.

Free Dynamically Allocated Memory:
free(ptr);: Frees the dynamically allocated memory before the program exits.
*/