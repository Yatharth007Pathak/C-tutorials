#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*
This C program prints a pyramid pattern of stars. It prompts the user to enter the number of rows 
for the pyramid and then prints the pattern accordingly. 
Here's how it works:
 

Header Inclusion:
The program includes the standard input-output header file stdio.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares integer variables rows to store the number of rows entered by the user, i as a loop counter for rows, 
j as a loop counter for columns, and space to keep track of the number of spaces to be printed.

User Input:
Prompts the user to enter the number of rows for the pattern.
Reads the input using scanf and stores it in the variable rows.

Generating Pattern:
Uses a nested for loop structure to generate the pattern.
Outer loop (i) iterates from 1 to rows, representing each row of the pattern.
Inner loop (space) prints spaces before the stars. The number of spaces decreases as i increases, creating a right-aligned triangle.
Inner loop (j) prints stars for each row. The number of stars in each row increases as i increases.
After printing the stars for each row, moves to the next line using printf("\n").

Returning Control to the Operating System:
The main function returns 0 to the operating system, indicating successful program execution.
*/

/*
Explanation:

The outer loop (for(i = 1; i <= rows; i++)) is responsible for iterating through each row of the pyramid. 
It starts from 1 and goes up to the number of rows entered by the user.

The inner loop (for(space = 1; space <= rows - i; space++)) is used to print the required number of spaces 
before printing the stars for each row. The number of spaces decreases as you move down the pyramid.

The next inner loop (for(j = 1; j <= 2 * i - 1; j++)) is used to print the stars. 
The number of stars in each row is 2 * i - 1, where i represents the current row number.

Finally, after printing all the spaces and stars for a particular row, a newline character (\n) 
is printed to move to the next line to start the next row.
*/