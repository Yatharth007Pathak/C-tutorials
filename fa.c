#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test5.txe", "r");

    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));

    fclose(fptr);

    return 0;
    }

    // read a char          fgetc(fptr)


/*
Our C program is designed to open a file named "test5.txe" in "read" mode ("r") and read individual characters from the 
file using the fgetc function. The characters are then printed to the console using printf. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test4.txe", "r");: Opens the file named "test4.txe" in read mode ("r"). If the file doesn't exist or 
there is an issue opening it, fptr will be assigned the value NULL. It's a good practice to check whether the file was successfully opened.

Multiple printf and fgetc statements: Reads individual characters from the file using fgetc and prints them to the console 
using printf. The fgetc function returns the next character from the file, and each subsequent call retrieves the next character.

fclose(fptr);: Closes the file after reading characters.

return 0;: Indicates the successful execution of the program.
*/