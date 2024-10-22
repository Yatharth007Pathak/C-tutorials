#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers
    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

/*
In this program:

We prompt the user to enter the value of n.
We read the entered value into the variable n.
We initialize the variable sum to 0, which will store the sum of the numbers.
We then use a for loop to iterate from 1 to n, and in each iteration, we add the current value of i to sum.
Finally, we print out the sum of the first n natural numbers.
*/