#include<stdio.h>

int countLength(char arr[]);

int main() {
    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d", countLength(name));
    return 0;
    }

    int countLength(char arr[]) {
        int count = 0;
        for(int i=0; arr[i] != '\0'; i++) {
            count++;
        }
        return count-1;
    }


    // make a program that inputs user's name and prints its length

    /*
    The given C program calculates and prints the length of a string entered by the user. 
    It uses the countLength function to iterate through the characters of the string until it encounters 
    the null character '\0', which marks the end of the string. The length is then printed using the printf statement.

    One thing to note is that the fgets function used to read input from the user includes the newline character ('\n'') 
    in the string if there is enough space in the buffer. Therefore, the countLength` function 
    subtracts 1 from the count to exclude the newline character.

    Here's a brief breakdown of the program:
    The main function declares an array name to store the input string and uses fgets to read input from the user.
    The countLength function takes a character array (char arr[]) as an argument and iterates through its characters 
    until it encounters the null character '\0'. It increments the count variable for each character. 
    The function then returns the count, subtracting 1 to exclude the newline character.

    In the main function, the length of the entered string is calculated using the countLength function, 
    and the result is printed using printf.
    
    The program returns 0 to indicate successful execution.
    */