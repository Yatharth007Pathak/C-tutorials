#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[] = "World";

    // Find the length of str1
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    // Concatenate str2 to str1
    int i = 0;
    while (str2[i] != '\0') {
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1 + i] = '\0';   // Add null terminator to the end

    printf("Concatenated string: %s\n", str1);

    return 0;
}


// C code to concatenate two strings without using any built-in functions:

/*
In this code:

We define two character arrays str1 and str2. str1 is initialized with "Hello" and str2 with "World".
We find the length of str1 by iterating through it until we encounter the null terminator '\0'.
We then concatenate str2 to str1 by appending each character of str2 to the end of str1.
Finally, we add a null terminator at the end of the concatenated string to ensure it terminates properly, 
and then print out the concatenated string.
*/