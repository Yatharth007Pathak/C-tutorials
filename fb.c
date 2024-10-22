#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test6.txt", "w");

    fputc('B', fptr);
    fputc('L', fptr);
    fputc('A', fptr);
    fputc('C', fptr);
    fputc('K', fptr);

    fclose(fptr);

    return 0;
    }


    // write a char       fputc('A', fptr)

/*
Our C program is creating a file named "test6.txt" and writing the characters 'B', 'L', 'A', 'C', 'K' into it using the fputc function. 
The file is opened in "write" mode ("w"), which means if the file already exists, its contents will be overwritten. 
If the file doesn't exist, a new file will be created.
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test6.txe", "w");: Opens the file named "test6.txe" in write mode ("w"). If the file doesn't exist, it will be created. 
If it does exist, its contents will be overwritten. The file pointer (fptr) is then assigned the address of the file stream.

Multiple fputc statements: Write individual characters 'B', 'L', 'A', 'C', 'K' to the file using the file pointer.

fclose(fptr);: Closes the file after writing the characters.

return 0;: Indicates the successful execution of the program.
*/