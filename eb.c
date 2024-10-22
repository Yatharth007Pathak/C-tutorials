#include<stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
    } 


// take a string input feom the user using %c

/*
This C program reads a line of characters from the user until a newline character ('\n') is encountered. 
It then prints the entered line using the puts function. Here's a step-by-step explanation:

#include <stdio.h>: This line includes the standard input-output header file for using functions like printf and scanf.
int main(): This is the main function where the execution of the program starts.
char str[100];: Declares an array str of characters with a size of 100, which will be used to store the entered line.
char ch;: Declares a character variable ch to temporarily store each character entered by the user.
int i = 0;: Initializes an integer variable i to 0, which will be used as an index to store characters in the str array.
while(ch != '\n'): Enters a loop that continues until the user enters a newline character ('\n').
scanf("%c", &ch);: Reads a single character from the user and stores it in the variable ch.
str[i] = ch;: Stores the character in the str array at the current index i.
i++;: Increments the index i for the next character.
str[i] = '\0';: Adds a null character ('\0') at the end of the array to mark the end of the string.
puts(str);: Prints the entered line using the puts function.
return 0;: Indicates that the program has executed successfully.

Note: The program doesn't handle the case where the user enters more than 99 characters (excluding the newline character). 
It's generally a good practice to add checks to ensure that the array bounds are not exceeded.
*/