#include<stdio.h>
#include<stdlib.h>

    int main () {
    int *ptr;
    int n;
    printf("enter n : "); 
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<n; i++) {
        printf("%d \n", ptr[i]); 
    }

    free(ptr);

    ptr = (int *) calloc(2, sizeof(int));
    for(int i=0; i<2; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr);

    return 0;
    }


/*
free()            free memory
we use it to free memory that is allocated using malloc and calloc
syntax :- freee(ptr)
*/



/*
our C program dynamically allocates two arrays of integers, the first one based on the user's input (n) and the second one with
 a fixed size of 2. Both arrays are initialized to zero using calloc, and their elements are then printed to the console. 
Finally, the program frees the allocated memory. When we run this program and enter a value for n, it will allocate an array of size n, 
print its elements (initialized to zero), free the memory, then allocate a second array of size 2, print its elements 
(also initialized to zero), and finally free the memory again. The output will show the contents of both dynamically allocated arrays.
*/

/*
Here's a breakdown of our code

Header Inclusions:
#include<stdio.h>: Includes the standard input-output header file.
#include<stdlib.h>: Includes the standard library header file, which provides functions 
for dynamic memory allocation (malloc, calloc, free, etc.).

Main Function:
int main() {: Marks the beginning of the main function.

Variable Declarations:
int *ptr;: Declares a pointer to an integer, which will be used to point to dynamically allocated memory.
int n;: Declares an integer variable n to store user input.

Dynamically Allocate the First Array:
printf("Enter n: ");: Prompts the user to enter the value of n.
scanf("%d", &n);: Reads the input for n from the user.
ptr = (int *)calloc(n, sizeof(int));: Allocates memory for an array of n integers using calloc. 
The sizeof(int) is used to determine the size of each integer in bytes. calloc initializes the allocated memory to zero.

Print Elements of the First Array:
printf("First array:\n");: Prints a label indicating that the following output represents the first array.
for(int i = 0; i < n; i++) { ... }: Starts a for loop to iterate over the elements of the first array.
printf("%d\n", ptr[i]);: Prints each element of the first array to the console.

Free the Memory for the First Array:
free(ptr);: Frees the dynamically allocated memory for the first array.

Dynamically Allocate the Second Array:
ptr = (int *)calloc(2, sizeof(int));: Allocates memory for an array of 2 integers using calloc. 
The sizeof(int) is used to determine the size of each integer in bytes. calloc initializes the allocated memory to zero.

Print Elements of the Second Array:
printf("Second array:\n");: Prints a label indicating that the following output represents the second array.
for(int i = 0; i < 2; i++) { ... }: Starts a for loop to iterate over the elements of the second array.
printf("%d\n", ptr[i]);: Prints each element of the second array to the console.

Free the Memory for the Second Array:
free(ptr);: Frees the dynamically allocated memory for the second array.

Return Statement:
return 0;: Indicates the successful execution of the program.
*/