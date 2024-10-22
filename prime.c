#include <stdio.h>

int isPrime(int num) {                                            // Function to check whether a number is prime
    if (num <= 1) {
        return 0;                                                 // Not prime
    }

    for (int i = 2; i * i <= num; i++) {                          // Loop to check for factors from 2 to square root of the number
        if (num % i == 0) {
            return 0;                                             // Not prime
        }
    }

    return 1;                                                     // Prime
}

int main() {                                                      // Main function
    int number;

    printf("Enter a number: ");                                   // Input from the user
    scanf("%d", &number);

    if (isPrime(number)) {                                        // Check if the entered number is prime or not
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}


// to find whether the entered number is prime or not


/*
Explanation:
The isPrime function takes an integer num as a parameter and returns 1 if it's a prime number and 0 otherwise.
If num is less than or equal to 1, it returns 0 (not prime).
It then uses a for loop to iterate from 2 to the square root of num. If num is divisible by any number in this range, it returns 0 (not prime). Otherwise, it returns 1 (prime).
In the main function:
It declares an integer variable number to store the user input.
Asks the user to enter a number using printf and scanf.
Calls the isPrime function to check whether the entered number is prime.
Prints the result based on the returned value from isPrime.
The program then returns 0 to indicate successful execution.
*/


/*
Let's go through each line of code:

#include <stdio.h>
This line includes the standard input/output library in C, which is necessary for functions like printf and scanf.

int isPrime(int num) {
This line defines a function named isPrime that takes an integer num as a parameter and returns an integer.

    if (num <= 1) {
    return 0; 
    }
This checks if the input number is less than or equal to 1. If true, it returns 0, indicating that the number is not prime.

    for (int i = 2; i * i <= num; i++) {
This line starts a loop that iterates from i = 2 up to the square root of the input number (num).
This is an optimization to reduce the number of iterations, as factors of a number won't be greater than its square root.

        if (num % i == 0) {
            return 0; // Not prime
        }
    }
Within the loop, it checks if the input number is divisible evenly by i. If true, it returns 0, 
indicating that the number is not prime, as it has a factor other than 1 and itself.

    return 1; 
}
If the loop completes without finding any factor, it returns 1, indicating that the number is prime.

int main() {
This line defines the main function, the entry point of the program.

    int number;
Declares an integer variable named number.

    printf("Enter a number: ");
    scanf("%d", &number);
Prints a prompt to the user and takes an integer input, storing it in the variable number.

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
Calls the isPrime function with the user-entered number and prints whether it's prime or not based on the returned value.

    return 0;
}
Indicates the end of the main function and the end of the program. The return value 0 conventionally represents successful execution.
*/