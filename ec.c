#include<stdio.h>
#include<string.h>

int countH (char str[]);

int main() {
    char str[] = "Krishna";
    printf("h are : %d", countH(str));

    return 0;
    }

    int countH (char str[]) {
        int count = 0;

        for(int i=0; str[i] != '\0'; i++) {
            if(str[i] == 'h') {
                count++;
            }
        }
        return count;

    }   

    // function to count the occurence of letter 'h' in a string


/*
Our C program seems to be counting the occurrences of the lowercase letter 'h' in the given string "Krishna" 
and then printing the count. 
Here's a brief explanation of our code:

The countH function takes a character array (char str[]) as an argument and returns an integer representing 
the count of lowercase 'h' characters in the given string.
In the main function, we declare a character array str initialized with the string "Krishna".
We then call the countH function with the str array as an argument and print the result using printf.
The countH function iterates through each character in the input string until it encounters the null character ('\0'). 
If the current character is 'h', it increments the count.
The final count is returned, and the result is printed in the main function.
*/
