#include<stdio.h>

int main() {

    char str[50];
    fgets(str, 50, stdin);
    puts(str);
    
    return 0;
    } 


    /*
    gets(str):
    The gets() function is used to read a line from the standard input (usually the keyboard) and store it as a 
    string in the array pointed to by str. It reads characters from the standard input until a 
    newline character ('\n') or the end-of-file (EOF) is encountered.
    This function is considered unsafe and is generally discouraged because it does not perform any bounds checking, 
    making it susceptible to buffer overflows. Its use is deprecated, and alternatives like fgets() should be preferred.
    */

    /*
    fgets(str, n, file):
    The fgets() function is used to read a line from the specified file stream (file) and store it in the array pointed to by str.
    It reads up to n-1 characters from the file stream or until a newline character ('\n') is encountered, whichever comes first.
    The resulting string is null-terminated.
    This function is safer than gets() because it allows you to specify the maximum number of characters to read, preventing buffer overflows.
    */

    /*
    puts(str):
    The puts() function is used to write a null-terminated string to the standard output (usually the console).
    It appends a newline character ('\n') after the string and displays it on the output.
    */