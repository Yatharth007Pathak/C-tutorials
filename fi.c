#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));


    for(int i=0; i<5; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr); 

    return 0;
    }


/*
calloc()          continuous allocation
initializes with 0
syntax :- ptr = (int *) calloc(5, sizeof(int));
*/


/*
our C program dynamically allocates an array of integers using calloc, which is similar to malloc but also initializes 
the allocated memory to zero. After that, it prints the elements of the dynamically allocated array and frees the memory. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

#include<stdlib.h>: This line includes the standard library header file, which provides functions like malloc, calloc, and free.

int main() {: This line marks the beginning of the main function.

int *ptr;: Declares a pointer to an integer, which will be used to point to the dynamically allocated memory.

ptr = (int *) calloc(5, sizeof(int));: Allocates memory for an array of 5 integers using calloc. 
The sizeof(int) is used to determine the size of each integer in bytes. calloc initializes the allocated memory to zero.

for(int i=0; i<5; i++) {: Starts a for loop to iterate over the elements of the array.

printf("%d \n", ptr[i]);: Prints each element of the array to the console.

free(ptr);: Frees the dynamically allocated memory.

return 0;: Indicates the successful execution of the program.

our program demonstrates the dynamic allocation of an array of integers using calloc, initialization of the array 
elements to zero, printing the values, and then freeing the memory. The key difference between malloc and calloc is 
that calloc initializes the allocated memory to zero, whereas malloc does not guarantee initialization.

our output should display five lines, each containing the value 0, as the array is initialized to zero by calloc.
*/


