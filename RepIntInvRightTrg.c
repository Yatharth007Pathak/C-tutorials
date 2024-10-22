#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}


/*
C program prints a pattern of numbers where each row contains the number equal to the row number, but in descending order. 
Here's a breakdown of how the modified program works:

It includes the standard input-output header file stdio.h.
In the main() function:
It declares integer variables rows, i, and j.
It prompts the user to enter the number of rows using printf().
It reads the number of rows entered by the user using scanf() and stores it in the variable rows.
It initiates a nested loop structure for printing the pattern:
The outer loop runs from the number of rows down to 1 (i represents the row number).
The inner loop runs from 1 to the current value of i (j represents the column number within the row).
Inside the inner loop, it prints the value of i (the current row number) followed by a space using printf().
After printing each row, it moves to the next line using printf("\n").
Finally, the main() function returns 0, indicating successful execution.
*/