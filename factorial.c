#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int num;
    int factorial = 1;

    // Input a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate the factorial of the number
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Display the calculated factorial
    printf("The factorial of %d is: %d\n", num, factorial);

    return 0;
}


/*
Here's a breakdown of each part:

Include Statements:
#include <stdio.h>: Includes the standard input/output library for functions like printf and scanf.
#include <math.h>: Although included, the math.h library is not used in this specific program.

Main Function:
int main() {: This is the main function, the starting point of the program.

Variable Declaration:
int num;: Declares an integer variable named 'num' to store the user's input.
int factorial = 1;: Declares an integer variable named 'factorial' and initializes it to 1. 
This variable will be used to store the factorial of 'num'.

User Input:
printf("Enter a non-negative integer: ");: Prints a message asking the user to enter a non-negative integer.
scanf("%d", &num);: Reads an integer value entered by the user and stores it in the variable 'num'.

Factorial Calculation:
for (int i = 1; i <= num; ++i) { factorial *= i; }: Uses a for loop to calculate the factorial of 'num'. 
It multiplies 'factorial' by each number from 1 to 'num'.

Output:
printf("The factorial of %d is: %d\n", num, factorial);: Prints the calculated factorial using the %d format specifier for integers.

Return Statement:
return 0;: Indicates that the program has executed successfully, and the main function returns 0 to the operating system.
*/