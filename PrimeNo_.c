#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num && isPrime; i++) {
        isPrime = num % i;
    }

    printf("%d is %sprime.\n", num, isPrime ? "" : "not ");

    return 0;
}


/*
This C program efficiently determines whether a given number is prime or not. Here's how it works:

Header Inclusion:
The program includes the standard input-output header file stdio.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares an integer variable num to store the user input.
Declares an integer variable isPrime and initializes it to 1. This variable will be used to track whether the number is prime or not.

User Input:
The program prompts the user to enter a number.
The input is read using scanf and stored in the variable num.

Prime Number Check:
Enters a for loop starting from 2 up to the square root of the entered number (i * i <= num).
Within the loop, isPrime is updated based on whether num is divisible by i (num % i). If num is divisible by i, isPrime becomes 0, indicating that the number is not prime.
The loop continues as long as isPrime is 1 (true) and i * i is less than or equal to num.

Output:
After the loop, the program prints whether the entered number is prime or not based on the value of isPrime.
If isPrime is 1, the number is prime, so the program prints "prime". If isPrime is 0, the number is not prime, so the program prints "not prime".

Returning Control to the Operating System:
The main function returns 0 to the operating system, indicating successful program execution.
*/