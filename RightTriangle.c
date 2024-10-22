#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
This C program takes an input from the user to determine the number of rows to print, 
and then it prints a pattern of asterisks in a triangular shape. Each row contains one more asterisk than the previous row.
Here's a breakdown of the provided C code pointwise:

Header Inclusion:
The program includes the standard input-output header file stdio.h using #include <stdio.h>.

Main Function:
The program defines the main function, which serves as the entry point of the program.

Variable Declaration:
Declares integer variables rows, i, and j without initializing them. These variables will be used as loop counters and to store user input.

User Input:
Prompts the user to enter the number of rows for the pattern by printing "Enter number of rows: ".
Reads the input using scanf and stores it in the variable rows.

Generating Pattern:
Uses a nested for loop structure to generate the pattern.
Outer loop (i) iterates from 1 to rows, representing each row of the pattern.
Inner loop (j) iterates from 1 to the current value of i, representing the number of stars to be printed in each row.
Inside the inner loop, prints a single asterisk * for each iteration.
After printing all the asterisks for a row, moves to the next line using printf("\n").

Returning Control to the Operating System:
The main function returns 0, indicating successful program execution, using return 0;.


This program efficiently generates a triangle pattern made of stars where each row contains an increasing number of stars. 
The number of rows and the number of stars in each row are determined by the user input.
*/