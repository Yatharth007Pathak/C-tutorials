#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    if(fptr == NULL) {
        printf("file doesn't exist \n");
    } else {
        fclose(fptr);
    }

    return 0;
    }


/*
The provided C code opens a file named "NewTest.txt" in write mode ("w"). 
If the file doesn't exist, it prints a message indicating that the file doesn't exist. 
If the file exists or if it's successfully created, the program closes the file and returns 0.

Here's a breakdown of the code:

#include <stdio.h>: This line includes the standard input/output library for file handling.

int main(): The main function, where the execution of the program begins.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used for file operations.

fptr = fopen("NewTest.txt", "w");: Opens a file named "NewTest.txt" in write mode ("w"). 
If the file doesn't exist, it will be created. The file pointer is assigned the address of the opened file.

if (fptr == NULL): Checks if the file opening operation was unsuccessful (i.e., the file doesn't exist or there was an error opening it).

printf("file doesn't exist \n");: Prints a message indicating that the file doesn't exist.

else: If the file was successfully opened (or created), this block of code is executed.

fclose(fptr);: Closes the file. It's important to close the file after performing file operations.

return 0;: Indicates that the program executed successfully and returns 0 to the operating system.
*/


/*
outout : The code will not produce any visible output to the console if the file "NewTest.txt" either exists or is successfully created. 
If the file opening operation fails (for example, due to permission issues or disk space problems), it will print "file doesn't exist." 
However, if the file is successfully opened or created, the program will simply close the file and return 0.

To summarize, if everything goes well, we won't see any output. If there's an issue opening or creating the file, 
we'll see the "file doesn't exist" message.
*/