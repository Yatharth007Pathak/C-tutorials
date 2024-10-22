#include<stdio.h>

int main() {
    char name[10];                                              // Declare an array of characters to store the name (size: 10 characters)
    printf("Enter your name (up to 9 characters): ");           // Print a prompt message
    scanf("%9s", name);                                         // Read a string input (name) from the user and store it in the 'name' array
    printf("your name is %s", name);                            // Print a message along with the entered name using 'printf'
    return 0;                                                   // Return 0 to indicate successful execution
    }
    

    /*
    main function:
    The main function is the entry point of the program.
    It declares a character array named name with a size of 10 characters, 
    which means it can store a string up to 9 characters long plus the null terminator '\0'.
    The scanf function is used to read a string input from the user and store it in the name array.
    The entered name is then printed using the printf function.

    if the entered name exceeds the allocated space (more than 9 characters), it may lead to undefined behavior or unexpected results.
    To make the program more robust, we might consider using fgets for input to handle longer strings more safely.
    */


   /*
    Our C program is a simple one that takes input for name and then prints it. 
    However, there is a potential issue with using %s in the scanf function, 
    which can lead to a buffer overflow if the input string is longer than the size of the array.

    To address this issue, we can use the %9s format specifier in the scanf function to limit 
    the input to 9 characters (leaving one character for the null-terminator). 
    */