#include<stdio.h>

int main() {
    
    FILE *fptr;                                              // Declare a file pointer

    fptr = fopen("test2.txt", "r");                          // Open the file "test2.txt" in read mode

    int in;                                                  // Declare a variable to store the integer read from the file

    fscanf(fptr, "%d", &in);                                 // Read and print the first integer
    printf("integer = %d \n", in);

    fscanf(fptr, "%d", &in);                                 // Read and print the second integer
    printf("integer = %d \n", in);

    fscanf(fptr, "%d", &in);                                 // Read and print the third integer
    printf("integer = %d \n", in);

    fscanf(fptr, "%d", &in);                                 // Read and print the forth integer
    printf("integer = %d \n", in);

    fscanf(fptr, "%d", &in);                                 // Read and print the fifth integer
    printf("integer = %d \n", in);

    fclose(fptr);                                            // Close the file

    return 0;                                                // Return 0 to indicate successful execution
    }  

/*
reading from a file
int in;
fscanf(fptr, "%d", &in);
*/



/*
Our C program opens a file named "test2.txt" in read mode and reads integers from it using fscanf. 
It then prints each integer to the console.

This program reads five integers from the file and prints each integer to the console. 
Make sure that the file "test2.txt" exists in the same directory as our program, and it contains the data we expect to read. 
If the file is not found or there is an issue with reading, we might encounter errors or unexpected behavior.
*/

