#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of cubes of the first n numbers
    for (int i = 1; i <= n; ++i) {
        sum += i * i * i;
    }

    // Display the result
    printf("The sum of cubes of the first %d numbers is: %d\n", n, sum);

    return 0;
}


/*
In this program:

We prompt the user to enter the value of n.
We read the value of n into the variable n.
We initialize a variable sum to store the sum of cubes of the numbers, initially set to 0.
We then use a for loop to iterate from 1 to n.
Inside the loop, for each iteration, we calculate the cube of the current number i and add it to sum.
After the loop, we display the calculated sum.
Finally, the program returns 0 to indicate successful execution.
*/