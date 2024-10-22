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

    return 0;
    }


    // write  a program to allocate memory of size n, where n is entered by the user


/*
In this C program, we dynamically allocate an array of integers based on the user's input n using the calloc function. 
The array is then initialized to zero, and the elements are printed to the console. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

#include<stdlib.h>: This line includes the standard library header file, which provides functions like calloc.

int main() {: This line marks the beginning of the main function.

int *ptr;: Declares a pointer to an integer, which will be used to point to the dynamically allocated memory.

int n;: Declares an integer variable n to store user input.

printf("enter n : ");: Prompts the user to enter the value of n.

scanf("%d", &n);: Reads the input for n from the user.

ptr = (int *) calloc(n, sizeof(int));: Allocates memory for an array of n integers using calloc. 
The sizeof(int) is used to determine the size of each integer in bytes. calloc initializes the allocated memory to zero.

for(int i=0; i<n; i++) {: Starts a for loop to iterate over the elements of the array.

printf("%d \n", ptr[i]);: Prints each element of the array to the console.

return 0;: Indicates the successful execution of the program.

Our program takes the user's input for the number of elements (n), dynamically allocates an array of integers with n elements, 
initializes them to zero using calloc, and then prints the elements to the console. The output will show n lines, each containing the value 0.
*/

