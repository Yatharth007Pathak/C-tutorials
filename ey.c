#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test3.txt", "w");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
    }

    /*
    writing to a file
    char ch = "Y"
    fprintf(fptr, "%c", ch);
    */



/*
Our C program is creating a file named "test3.txt" and writing the characters 'M', 'A', 'N', 'G', 'O' into it using the fprintf function. 
The file is opened in "write" mode ("w"), which means if the file already exists, its contents will be overwritten. 
If the file doesn't exist, a new file will be created.

Here's a breakdown of our code:

#include<stdio.h>: This line includes the standard input-output header file, which contains functions like printf, scanf, fopen, and others.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test3.txt", "w");: Opens the file named "test3.txt" in write mode ("w"). If the file doesn't exist, it will be created. 
If it does exist, its contents will be overwritten. The file pointer (fptr) is then assigned the address of the file stream.

Multiple fprintf statements: Write individual characters 'M', 'A', 'N', 'G', 'O' to the file using the file pointer.

fclose(fptr);: Closes the file after writing the characters.

return 0;: Indicates the successful execution of the program.
*/