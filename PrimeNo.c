#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


/*
This C program checks whether a given number is prime or not. Here's how it works:

Header Inclusion:
The program includes the standard input-output header file stdio.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares an integer variable num to store the user input (the number to be checked for primality).
Declares an integer variable isPrime and initializes it to 1. This variable will be used to track whether the number is prime or not.

User Input:
The program prompts the user to enter a number.
The input is read using scanf and stored in the variable num.

Checking for Primality:
If the entered number is less than or equal to 1, it's not prime (as per the definition of prime numbers), so isPrime is set to 0.
If the number is greater than 1, the program enters a for loop with i starting from 2 and continuing until i * i is less than or equal to num. 
This loop iterates through potential factors of num.
Inside the loop, if num is divisible by i (i.e., num % i == 0), then num is not prime, so isPrime is set to 0 and the loop breaks.

Output:
After checking primality, the program prints whether the entered number is prime or not based on the value of isPrime.
If isPrime is 1, it prints that the number is prime. Otherwise, it prints that the number is not prime.

Returning Control to the Operating System:
The main function returns 0 to the operating system, indicating successful program execution.


This version directly checks if the number is less than or equal to 1, and if not, it iterates only up to the 
square root of the number to check for divisibility. It uses a flag isPrime to keep track of whether the number is prime or not.
*/