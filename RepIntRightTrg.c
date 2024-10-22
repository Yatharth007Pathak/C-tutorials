#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

/*
This C program prints a pattern of numbers where each row contains the number equal to the row number.
Here's a breakdown of how the program works:

The program starts by including the standard input-output header file stdio.h.
It defines the main() function, which is the entry point of the program.
Inside main(), it declares integer variables rows, i, and j.
The program prompts the user to enter the number of rows using printf().
It reads the user input for the number of rows using scanf() and stores it in the variable rows.
It initiates a nested loop structure for printing the pattern, 
where the outer loop iterates over the rows from 1 to the number of rows entered by the user (i represents the row number).
Within the outer loop, there's an inner loop that iterates over the columns from 1 to the current row number 
(j represents the column number within the row).
Inside the inner loop, it prints the value of i (the current row number) followed by a space using printf()
After printing all the numbers for the current row, it moves to the next line using printf("\n").
Once all rows are printed, the program returns 0, indicating successful execution.
*/