#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main() {
    char str[] = "HareKrishna";
    char ch = 'r';
    checkChar(str, ch);

    return 0;
    }

    void checkChar(char str[], char ch) {
        for(int i=0; str[i] != '\0'; i++) {
            if(str[i] == ch) {
                printf("character is present");
                return;
            }
        }
        printf("character is not present"); 

    }


    // function to check if a given character is present in a string or not


/*
Our C program appears to be a simple implementation to check if a specific character is present in a given string. 
The program defines a function checkChar that takes a string str and a character ch as parameters and prints 
whether the character is present in the string or not.

Here's a brief breakdown of your code:

The #include directives are used to include necessary header files (stdio.h and string.h).
The main function initializes a character array str with the value "HareKrishna" and a character ch with the value 'r'. 
Then, it calls the checkChar function with these values.
The checkChar function iterates through each character in the input string using a for loop. 
It checks if the current character is equal to the target character ch. 
If a match is found, it prints "character is present" and returns from the function.
If the loop completes without finding a match, it prints "character is not present."
*/