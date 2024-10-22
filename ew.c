#include<stdio.h>

int main() {
    
    FILE *fptr;                                              // Declare a file pointer

    fptr = fopen("test.txt", "r");                           // Open the file "test.txt" in read mode

    char ch;                                                 // Declare a variable to store the character read from the file

    fscanf(fptr, "%c", &ch);                                 // Read and print the first character
    printf("character = %c \n", ch);

    fscanf(fptr, "%c", &ch);                                 // Read and print the second character
    printf("character = %c \n", ch);

    fscanf(fptr, "%c", &ch);                                 // Read and print the third character
    printf("character = %c \n", ch);

    fscanf(fptr, "%c", &ch);                                 // Read and print the forth character
    printf("character = %c \n", ch);

    fscanf(fptr, "%c", &ch);                                 // Read and print the fifth character
    printf("character = %c \n", ch);

    fclose(fptr);                                            // Close the file

    return 0;                                                // Return 0 to indicate successful execution
    }  

/*
reading from a file
char ch;
fscanf(fptr, "%c", &ch);
*/


/*
Our C program opens a file named "test.txt" in read mode and reads characters from it using fscanf. 
It then prints each character to the console.

This program reads five characters from the file and prints each character to the console. 
Make sure that the file "test.txt" exists in the same directory as our program, and it contains the data we expect to read. 
If the file is not found or there is an issue with reading, we might encounter errors or unexpected behavior.
*/
