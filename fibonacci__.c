#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    return 0;
}


/*
This C program generates the Fibonacci series up to a specified number of terms (n) entered by the user. 
Here's a breakdown of how it works:

Header Inclusion:
Includes the standard input-output header file stdio.h.

Main Function:
Begins with the main function.

Variable Declarations:
n: Variable to store the number of terms in the Fibonacci series.
first: Variable to store the first number in the Fibonacci series (initialized to 0).
second: Variable to store the second number in the Fibonacci series (initialized to 1).
next: Variable to store the next number in the Fibonacci series.

User Input:
Prompts the user to enter the number of terms (n) for the Fibonacci series.
Reads the input using scanf.

Generating Fibonacci Series:
Prints a message indicating the range of the Fibonacci series being generated.
Enters a for loop with i starting from 0 and ending at n-1.
Within the loop, prints the value of first, which starts at 0.
Calculates the next Fibonacci number (next) by adding first and second.
Updates the values of first and second for the next iteration.
The loop continues until it reaches the specified number of terms (n).

Returning Control to the Operating System:
Exits the main function with a return value of 0, indicating successful execution.
*/