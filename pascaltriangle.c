#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

// C program prints Pascal's triangle up to a specified number of rows entered by the user


/*
Explanation:

The program starts by prompting the user to enter the number of rows they want to generate for Pascal's triangle.

It reads the inputted number of rows using scanf() and stores it in the variable rows.

The outer loop (for loop) runs from i = 0 to rows - 1. This loop controls the number of rows to be printed.

Inside the outer loop, there's an inner loop (for loop) that runs from j = 0 to i. 
This loop calculates and prints the coefficients for the current row.

At the beginning of each row, coef is initialized to 1. Then, within the inner loop, the coefficients for
 each position in the row are calculated using the formula coef = coef * (i - j) / (j + 1), 
 where i represents the current row number and j represents the position in the row.

he coefficients are printed one by one with spaces in between using printf("%d ", coef).

After printing all coefficients for the current row, a newline character (\n) is printed to move to the next line.

This process repeats until all rows are printed, and then the program terminates.
*/