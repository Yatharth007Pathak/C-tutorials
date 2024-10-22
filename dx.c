#include<stdio.h>
#include<string.h>

int main() {

    char firstStr[] = "Apple";
    char secStr[] = "Banana";

    printf("%d", strcmp(firstStr, secStr));

    return 0;
}

    /*
    strcmp(firstStr,. secStr)
    compares 2 strings and returns a value
    0-> string equal
    positive-> first > second (ASCII)
    negative-> second > first (ASCII)
    */


/*
Character Arrays:
char firstStr[] = "Apple";: Declares and initializes a character array firstStr with the content "Apple".
char secStr[] = "Banana";: Declares and initializes another character array secStr with the content "Banana".

String Comparison and Output:
printf("%d", strcmp(firstStr, secStr));: Compares the strings firstStr and secStr using the strcmp function 
and prints the result as an integer using the printf function.
*/


/*
Our C program compares two strings, "Apple" and "Banana," using the strcmp function and prints the result.

The strcmp function returns an integer value that indicates the lexicographical relationship between the two strings. 

If the result is:
0: It means the strings are equal.
Positive value: It indicates that the first differing character in the strings has a greater ASCII value in the first string.
Negative value: It indicates that the first differing character in the strings has a greater ASCII value in the second string.

In our case, since we are comparing "Apple" and "Banana," the result will be a negative value. 
The exact value depends on the ASCII values of the characters where the strings differ.

When we run this program, it will print the result of the comparison. 
If the output is -1, for example, it means that "Apple" is lexicographically smaller than "Banana."
*/