#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);               // Function prototype for the 'slice' function

int main() {                                        // Main function

    char str[] = "har har mahadev";                 // Declare and initialize a character array "str" with the value "har har mahadev".
    slice(str, 8, 14);                              // Call the function slice with arguments str, 8, and 14.

    return 0;                                       // Return 0 to indicate successful execution.
    }

    void slice(char str[], int n, int m) {          // Function definition for slice. Takes a character array 'str' and two integers 'n' and 'm'.
        char newStr[100];                           // Declare a new character array "newStr" with a size of 100 to store the sliced substring
        int j = 0;                                  // Initialize an index variable 'j' to 0.
        for(int i=n; i<=m; i++, j++) {              // Iterate through the 'str' array from index 'n' to 'm'. 
            newStr[j] = str[i];                     // Copy the characters to the 'newStr' array.
        }
        newStr[j] = '\0';                           // Add a null terminator at the end of the 'newStr' array.

        puts(newStr);                               // Print the 'newStr' array using the puts function.

    }

    // Write a function named slice, which takes a string and returns a sliced string from index n to m

    /*
    Slicing is a concept commonly found in programming languages that allows us to extract a portion (a "slice") of a data structure, 
    such as an array, list, or string. It provides a way to access a contiguous subsequence of elements from the original data structure.
    */


/*
This code defines a function slice that takes a character array (str) and two integers (n and m). 
It then copies the characters from index n to index m (inclusive) into a new character array (newStr) and prints 
the result using the puts function. In the main function, the slice function is called with the string 
"har har mahadev" and the range from index 8 to 14. The output will be the sliced portion of the string, which is "mahadev".
*/


/*
break down of code step by step:

Header Files:
The #include directives are used to include the necessary header files.
In this case, stdio.h is included for input/output functions, and string.h is included for string manipulation functions.

Function Prototype:
This line declares the prototype of the function slice. It indicates that slice is a function that takes a 
character array (str) and two integers (n and m) as parameters and does not return anything (void).

Main Function:
The main function is the entry point of the program.
A character array str is declared and initialized with the string "har har mahadev".
The slice function is called with str and the range from index 8 to 14.
The function main returns 0 to indicate successful execution.

Slice Function:
The slice function is defined to extract a portion of a string.
It takes a character array str, and two integers n and m as parameters.
It declares a new character array newStr with a size of 100 to store the sliced portion.
It initializes an index variable j to 0.
It iterates through the str array from index n to m (inclusive) and copies the characters to newStr.
It adds a null terminator at the end of newStr to make it a valid C string.
It prints the sliced portion using the puts function.
*/