#include<stdio.h>
#include<string.h>

int countVowels (char str[]);                                                                                               // function prototype for countVowels:

int main() {
    char str[] = "HelloWorld";
    printf("vowels are : %d", countVowels(str));                                                                            // Call the function slice with argument str, Print the result of the countVowels function

    return 0;                                                                                                               // Return 0 to indicate successful execution
    }

    int countVowels (char str[]) {                                                                                          // Function definition for counting vowels in a string
        int count = 0;                                                                                                      // Initialize a variable to count the number of vowels

        for(int i=0; str[i] != '\0'; i++) {                                                                                 // Iterate through each character in the string until the null character '\0' is encountered
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {                         // Check if the current character is a vowel (a, e, i, o, u)
                count++;                                                                                                    // Increment the count if a vowel is found
            }
        }
        return count;                                                                                                       // Return the final count of vowels in the given string

    }

    // function to count the occurence of vowels in a string



/*
Include Header Files:
This includes the necessary header files for standard input/output functions (printf) and string manipulation functions (strlen).

Function Prototype:
Function prototype for countVowels, indicating that this function takes a character array (str) as an argument and returns an integer.

Main Function:
Declares a character array str initialized with the string "HelloWorld".
Calls the countVowels function with str as an argument and prints the result using printf.
Returns 0 to indicate successful program execution.

countVowels Function:
Takes a character array str as an argument.
Initializes a counter variable count to 0.
Uses a for loop to iterate through each character in the string until the null terminator ('\0') is encountered.
Checks if the current character is a vowel ('a', 'e', 'i', 'o', or 'u').
If a vowel is found, increments the count variable.
Returns the final count of vowels in the string.

Output:
The program prints the count of vowels in the given string using printf.
*/