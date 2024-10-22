#include <stdio.h>
#include <string.h>

int main() {
    
    char originalStr[100];                                         // Declare arrays to store the original and copied strings
    char copiedStr[100];

    printf("Enter a string: ");                                    // Get input from the user
    fgets(originalStr, sizeof(originalStr), stdin);

    originalStr[strcspn(originalStr, "\n")] = '\0';                // Remove the newline character from the input string

    int length = strlen(originalStr);                              // Calculate the length of the original string

    strcpy(copiedStr, originalStr);                                // Copy the original string to the new array

    printf("Original String: %s\n", originalStr);                  // Print the original and copied strings
    printf("Copied String: %s\n", copiedStr);
    
    printf("Length of the string: %d\n", length);                  // Print the length of the original string

    return 0;
}

/*
some of the key functions provided by string.h:

strcpy(char dest, const char src):
Copies the string pointed to by src to the character array pointed to by dest.

strncpy(char dest, const char src, size_t n):
Copies at most n characters from the string pointed to by src to the character array pointed to by dest.

strcat(char dest, const char src):
Concatenates the string pointed to by src to the end of the string pointed to by dest.

strncat(char dest, const char src, size_t n):
Concatenates at most n characters from the string pointed to by src to the end of the string pointed to by dest.

strcmp(const char str1, const char str2):
Compares the strings str1 and str2. Returns 0 if the strings are equal, a positive value 
if str1 is greater than str2, and a negative value if str1 is less than str2.

strncmp(const char str1, const char str2, size_t n):
Compares at most n characters of the strings str1 and str2. Returns 0 if the strings are equal, 
a positive value if str1 is greater than str2, and a negative value if str1 is less than str2.

strlen(const char str):
Returns the length of the string str (excluding the null terminator).

strstr(const char haystack, const char needle):
Returns a pointer to the first occurrence of the substring needle in the string haystack, or NULL if the substring is not found.
*/


/*
In this program:

fgets is used to get input from the user, ensuring the input does not exceed the size of the array (sizeof(originalStr)).
strlen is used to calculate the length of the original string.
strcpy is used to copy the original string to another array (copiedStr).
The newline character is removed from the input string using strcspn.
The program then prints both the original and copied strings, along with the length of the original string.
*/