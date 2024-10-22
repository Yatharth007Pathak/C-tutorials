#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for(i = 1; i <= rows; i++) {
        // Print spaces before asterisks
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print asterisks
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond (excluding the center row)
    for(i = rows - 1; i >= 1; i--) {
        // Print spaces before asterisks
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print asterisks
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*
This C program takes an input from the user to determine the number of rows to print. 
It then prints a pattern of asterisks in a diamond shape.
Here's a breakdown of the provided C program:

Header Inclusion:
The program includes the standard input-output header file stdio.h using #include <stdio.h>.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares integer variables rows, i, j, and space without initializing them. 
These variables will be used as loop counters and to store user input.

User Input:
Prompts the user to enter the number of rows for the diamond pattern by printing "Enter number of rows: ".
Reads the input using scanf and stores it in the variable rows.

Generating Upper Half of the Diamond:
Uses a loop (for loop) to generate the upper half of the diamond pattern.
Inner loop (space) prints spaces before the asterisks to create the triangular shape of the upper half.
Inner loop (j) prints the asterisks for each row. 
The number of asterisks increases from 1 to 2 * i - 1, where i represents the current row number.
After printing all the asterisks for a row, moves to the next line using printf("\n").

Generating Lower Half of the Diamond (Excluding Center Row):
Uses another loop (for loop) to generate the lower half of the diamond pattern, excluding the center row.
Similar to the upper half, prints spaces before the asterisks to maintain the diamond shape.
Prints the asterisks for each row. The number of asterisks decreases from 2 * rows - 3 to 1, where rows is the total number of rows.
After printing all the asterisks for a row, moves to the next line using printf("\n").

Returning Control to the Operating System:
The main function returns 0, indicating successful program execution, using return 0;.


This program efficiently generates a diamond pattern made of asterisks based on the user-input number of rows. 
It first generates the upper half of the diamond and then the lower half, excluding the center row.
*/