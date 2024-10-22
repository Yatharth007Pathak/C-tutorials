#include<stdio.h>
#include<stdlib.h>

int main () {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 100.0;
    ptr[1] = 300.0;
    ptr[2] = 500.0;
    ptr[3] = 700.0;
    ptr[4] = 900.0;

    for(int i=0; i<5; i++) {
        printf("%f \n", ptr[i]);
    }

    free(ptr); 


    return 0;
    }

// write  a program to allocate memory to store 5 prices


/*
our C program is similar to the previous one, but it dynamically allocates an array of floats, initializes 
the elements of the array, prints them using a for loop, and then frees the dynamically allocated memory. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

#include<stdlib.h>: This line includes the standard library header file, which provides functions like malloc and free.

int main() {: This line marks the beginning of the main function.

float *ptr;: Declares a pointer to a float, which will be used to point to the dynamically allocated memory.

ptr = (float *) malloc(5 * sizeof(float));: Allocates memory for an array of 5 floats using malloc. 
The sizeof(float) is used to determine the size of each float in bytes. The cast (float *) is used to convert 
the void pointer returned by malloc to a float pointer.

ptr[0] = 100.0;, ptr[1] = 300.0;, ..., ptr[4] = 900.0;: Initializes the elements of the dynamically allocated array with float values.

for(int i=0; i<5; i++) {: Starts a for loop to iterate over the elements of the array.

printf("%f \n", ptr[i]);: Prints each element of the array to the console.

free(ptr);: Frees the dynamically allocated memory.

return 0;: Indicates the successful execution of the program.
*/