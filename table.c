#include <stdio.h>

int main() {
    int number, i;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the table of the entered number
    printf("Table of %d:\n", number);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}


/*
In this program:

We prompt the user to enter a number.
We read the entered number into the variable number.
We then print the table of the entered number using a for loop that iterates from 1 to 10.
Inside the loop, we print each multiplication operation in the format "number x i = result", where i is the current iteration value and result is the product of number and i.
Finally, the program returns 0 to indicate successful execution.
*/