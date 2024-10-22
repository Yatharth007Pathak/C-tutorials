#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test7.txt", "r");

    char ch;
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
    }


/*
EOF (End Of File)
fgetc returns EOF to show that the file has ended
*/


/*
Our C program is designed to open a file named "test7.txt" in "read" mode ("r") and read characters from the file using a 
while loop with fgetc. It prints each character to the console until the end of the file (EOF) is reached. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test7.txt", "r");: Opens the file named "test7.txt" in read mode ("r"). If the file doesn't exist or there 
is an issue opening it, fptr will be assigned the value NULL. It's a good practice to check whether the file was successfully opened.

char ch;: Declares a variable ch of type char to store each character read from the file.

ch = fgetc(fptr);: Reads the first character from the file.

while(ch != EOF) {: Enters a while loop that continues until the end of the file (EOF) is reached.

Inside the loop:
printf("%c", ch);: Prints the current character to the console.
ch = fgetc(fptr);: Reads the next character from the file.
printf("\n");: Prints a newline character after reading all characters from the file.

fclose(fptr);: Closes the file after reading characters.

return 0;: Indicates the successful execution of the program.
*/