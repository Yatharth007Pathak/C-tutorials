#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++) {
        printf("%d \n", ptr[i]);
    }


    ptr = realloc(ptr, 6);

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for(int i=0; i<6; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr);

    return 0;
    }


    // allocate memory to store first  odd numbers, then reallocate it to store first 6 even numbers

/*
our C program dynamically allocates an array of integers using malloc with an initial size of 5, 
assigns values to the elements, prints them, then uses realloc to resize the array to 6 elements, 
assigns new values to the additional element, and prints the updated array. Finally, it frees the dynamically allocated memory. 
Here's a breakdown of our code:

Dynamically Allocate Initial Array:
ptr = (int *)malloc(5 * sizeof(int));: Allocates memory for an array of 5 integers using malloc.

Assign Values and Print the First Array:
ptr[0] = 1;, ptr[1] = 3;, ..., ptr[4] = 9;: Assigns values to the elements of the first array.
printf("First array:\n");: Prints a label indicating that the following output represents the first array.
for(int i = 0; i < 5; i++) { ... }: Loops to print the elements of the first array.

Resize the Array Using realloc:
ptr = realloc(ptr, 6 * sizeof(int));: Resizes the array to 6 elements using realloc.

Assign Values to the Resized Array:
ptr[5] = 12;: Assigns a value to the additional element of the resized array.

Print the Resized Array:
printf("Resized array:\n");: Prints a label indicating that the following output represents the resized array.
for(int i = 0; i < 6; i++) { ... }: Loops to print the elements of the resized array.

Free Dynamically Allocated Memory:
free(ptr);: Frees the dynamically allocated memory before the program exits.

*/