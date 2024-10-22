#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fclose(fptr);

    return 0;
}


    /*
    File Input Output (File IO)
    Volatile memory :- RAM                Non volatile memory :- hard disk

    File is a container in a storage device to store data. files are used to persist the dsata

    Operations on files :-
    create a file      open a file      close a file         read from a file         write in a file

    Types of files :-
    Text files (textual data)  eg   .txt   .c   .java
    Binary files (binary data)  eg   .exe   .mp3    .jpg

    File pointers:-
    FILE is a (hidden) structure that needs to be created for opening a file
    A FILE ptr that points to this structure and is used to access tjhe file
    FILE *fptr;

    In the C programming language, a file pointer is a special pointer variable that is used to keep track of the 
    current position in a file during input and output operations. It points to the next character or byte in the file 
    that will be read or written. File pointers are essential for performing file operations like reading from or writing to a file.

    The FILE type in C represents a file stream, and file pointers are of type FILE*. 
    When we open a file using functions like fopen(), a FILE* is returned, and we use this file pointer for subsequent file operations.
    */



/*
We have a simple C program that opens a file named "text.txt" in read mode and then closes it. 
The program checks if the file opening was successful and prints an error message if it fails.

Here's a brief breakdown of our code:

#include <stdio.h>: This line includes the standard input/output library, which provides functions like printf and file I/O operations.

int main(): This is the main function where the program starts its execution.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("text.txt", "r");: Opens the file named "text.txt" in read-only mode ("r"). 
The fopen function returns a pointer to the opened file, and this pointer is assigned to fptr. 
If the file opening fails, fptr will be set to NULL.

if (fptr == NULL) { printf("Error opening the file.\n"); return 1; }: Checks if the file opening was successful. 
If it fails (i.e., fptr is NULL), it prints an error message and exits the program with a return code of 1.

fclose(fptr);: Closes the opened file. It's important to close files after using them to free up system resources.

return 0;: Indicates that the program executed successfully and returns 0 to the operating system.
*/   



/*
Here's a brief overview of some commonly used file-related functions and how they involve file pointers:

fopen(): Used to open a file and returns a file pointer.
Example: FILE *fp = fopen("example.txt", "r");

fclose(): Used to close a file.
Example: fclose(fp);

fread() and fwrite(): Used for reading and writing binary data from/to a file.
Example: fread(buffer, sizeof(char), 100, fp);

fscanf() and fprintf(): Used for reading and writing formatted data from/to a file.
Example: fscanf(fp, "%d %s", &num, str);

fgets() and fputs(): Used for reading and writing strings from/to a file.
Example: fgets(buffer, 100, fp);

fseek() and ftell(): Used to move the file pointer to a specific position or to get the current position.
Example: fseek(fp, 10, SEEK_SET);
 
rewind(): Moves the file pointer to the beginning of the file.
Example: rewind(fp);

feof(): Checks if the end of the file has been reached.
Example: while (!feof(fp)) { /* read from file */ }
*/