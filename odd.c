#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd numbers from 0 to %d are:\n", n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

/*
This C program prompts the user to enter a number n, then prints all odd numbers from 1 up to n, inclusive. 
Here's how it works:

Header Inclusion:
The program includes the standard input-output header file stdio.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares an integer variable n to store the user input.

User Input:
The program prompts the user to enter a number.
The input is read using scanf and stored in the variable n.

Printing Odd Numbers:
The program prints a message indicating the range of odd numbers being printed.
It enters a for loop with i starting from 1 (the first odd number) and incrementing by 2 in each iteration until i is less than or equal to n.
Inside the loop, each value of i (representing an odd number) is printed.

Returning Control to the Operating System:
The main function returns 0 to the operating system, indicating successful program execution.
*/