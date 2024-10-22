#include <stdio.h>

// Function declaration
int factorial(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the factorial function and printing the result
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


/*
Here's a breakdown of the code pointwise:

The program begins by including the standard input-output header file <stdio.h>, 
enabling the use of functions like printf() and scanf() for input and output operations.

It declares a function named factorial which calculates the factorial of a given integer. 
This function is declared before the main() function to ensure that it can be called from within main().

The main() function serves as the entry point of the program. It declares an integer variable num 
to store user input, prompts the user to enter a number, and reads the input using scanf().

After obtaining the input number, the main() function calls the factorial() function with the entered number as an argument. 
It then prints the result using printf(), displaying the factorial of the input number.

The factorial() function is defined below main(). It takes an integer n as input and returns the factorial of n.
Within this function, the base cases for factorial (0 and 1) are handled, returning 1. 
For other values of n, it recursively calls itself with n-1, multiplying the result by n until reaching the base cases.
*/