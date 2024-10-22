#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}


/*
The code begins with the inclusion of the standard input-output library stdio.h.
The main() function is defined, which is the entry point of the program.
Inside main(), the following variables are declared:
rows: an integer variable to store the number of rows entered by the user.
i and j: integer variables used as loop counters.
ch: a character variable initialized with the character 'A'.
The printf() function prompts the user to enter the number of rows.
The scanf() function reads an integer from the user and stores it in the rows variable.
A nested loop structure is used:
The outer loop runs from 1 to the value of rows.
The inner loop runs from 1 to the current value of the outer loop variable i.
Inside the inner loop, printf() prints the character stored in ch, followed by a space.
After printing, the value of ch is incremented by 1, so it will print the next character in the ASCII sequence.
After printing each row, a newline character (\n) is printed to move to the next line.
Once the loops finish executing, the program returns 0 to indicate successful execution.
*/