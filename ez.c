#include<stdio.h>

int main() {

    FILE *fptr;
    fptr = fopen("test4.txt", "a");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
    }


/*
Our C program is similar to the previous one, but with a slight difference in the file opening mode. In this case, 
we're opening the file named "test4.txt" in "append" mode ("a"). This means that if the file already exists, the new data 
will be appended to the end of the file, preserving the existing content. If the file doesn't exist, a new file will be created.

Here's a breakdown of our code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test4.txt", "a");: Opens the file named "test4.txt" in append mode ("a"). If the file doesn't exist, it will be created. 
If it does exist, new data will be appended to the end of the file. The file pointer (fptr) is then assigned the address of the file stream.

Multiple fprintf statements: Write individual characters 'M', 'A', 'N', 'G', 'O' to the file using the file pointer. 
Since the file is opened in append mode, the new data will be added to the end of the file.

fclose(fptr);: Closes the file after writing the characters.

return 0;: Indicates the successful execution of the program.
*/