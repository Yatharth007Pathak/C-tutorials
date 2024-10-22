#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Even numbers from 0 to %d are:\n", n);
    
    for (int i = 0; i <= n; i += 2) {
        printf("%d\n", i);
    }
    
    return 0;
}

/*
This C program prompts the user to enter a value n, then prints all even numbers from 0 up to n, inclusive. 
Here's a breakdown of how it works:

Header Inclusion:
Includes the standard input-output header file stdio.h.

Main Function:
Begins with the main function.

Variable Declaration:
Declares an integer variable n to store the user input.

User Input:
Prompts the user to enter the value of n.
Reads the input using scanf.

Printing Even Numbers:
Prints a message indicating the range of even numbers being printed.
Enters a for loop with i starting from 0 and incrementing by 2 until it reaches n.
Within the loop, prints the current value of i, which represents an even number.
The loop continues until i reaches or exceeds the value of n.

Returning Control to the Operating System:
Exits the main function with a return value of 0, indicating successful execution.
*/