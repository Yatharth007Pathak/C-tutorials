#include<stdio.h>
#include<string.h>

int main () {
    char name[] = "krishna";
    printf("length is : %d", strlen(name));

    return 0;
}

// strlen(str) counts number of characters excluding '\0'


/*
In this code:

We include the necessary header files (stdio.h for input/output functions and string.h for string-related functions).
We declare a character array name and initialize it with the string "krishna". 
Note that the size of the array is automatically determined based on the length of the string.
The printf statement prints the length of the string using the strlen function. The %d format specifier is used to print an integer.
Finally, the return 0; statement ends the main function and indicates successful program execution to the operating system.
*/


/*
In C programming, string.h is a header file that provides several functions for manipulating strings, 
which are sequences of characters stored in arrays. 
Here are some of the key functions provided by string.h:

strlen(): Calculates the length of a string.
strcpy(): Copies one string to another.
strncpy(): Copies a specified number of characters from one string to another.
strcmp(): Compares two strings lexicographically.
strncmp(): Compares a specified number of characters from two strings.
strcat(): Concatenates (appends) one string to another.
strncat(): Concatenates a specified number of characters from one string to another.
strstr(): Finds the first occurrence of a substring in a string.
strchr(): Finds the first occurrence of a character in a string.

These functions, along with others provided by string.h, are widely used for string manipulation in C programming. 
C-style strings are null-terminated arrays of characters, so functions in string.h often work with null-terminated strings.
*/