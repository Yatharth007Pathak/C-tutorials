#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}


/*
This C program prints a pattern of numbers in a righttriangular shape where each row contains increasing numbers. 
Below is the breakdown of the program:

Header Inclusion:
The program includes the standard input-output header file stdio.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares integer variables rows, i, j, and num. rows stores the number of rows entered by the user. 
i and j are loop counters, while num stores the number to be printed.

User Input:
Prompts the user to enter the number of rows for the pattern by printing "Enter number of rows: ".
Reads the input using scanf and stores it in the variable rows.

Generating Pattern:
Uses a nested for loop structure to generate the pattern.
Outer loop (i) iterates from 1 to rows, representing each row of the pattern.
Inner loop (j) iterates from 1 to the current value of i, representing the number of elements to be printed in each row.
Inside the inner loop, prints the current value of num followed by a space using printf("%d ", num++). 
Then increments num by 1 to prepare for the next number.
After printing all the numbers for a row, moves to the next line using printf("\n").

Returning Control to the Operating System:
The main function returns 0, indicating successful program execution.


This program efficiently prints a right triangular pattern of numbers where each row contains increasing numbers 
starting from 1 and increments by 1 for each subsequent row, based on the user-input number of rows.
*/