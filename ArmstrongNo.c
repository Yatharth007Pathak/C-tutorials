#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Check if it's an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Print the result
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


/*
This C program determines whether a given number is an Armstrong number or not. 
An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, or pluperfect number) 
is a number that is equal to the sum of its own digits each raised to the power of the number of digits in the number.

Here's a breakdown of how the program works:

Header Inclusion:
The program includes the standard input-output header file stdio.h and the math functions header file math.h.

Main Function:
The main function is the entry point of the program.

Variable Declaration:
Declares integer variables num to store the user input number, originalNum to store the original value of num, 
remainder to store the remainder obtained when dividing originalNum by 10, n to store the number of digits in num, 
and result to store the sum of the digits each raised to the power of n.

User Input:
Prompts the user to enter a number.
Reads the input using scanf and stores it in the variable num.

Counting Digits:
Counts the number of digits in the entered number num by repeatedly dividing originalNum by 10 
until it becomes zero, incrementing n for each division.

Check for Armstrong Number:
Resets the value of originalNum to the entered number num.
Iterates through each digit of the number by repeatedly dividing originalNum by 10 and computing 
the sum of the digits each raised to the power of n.
Computes remainder as the last digit of originalNum.
Computes result by adding the remainder raised to the power of n.
Divides originalNum by 10 to move to the next digit.

Output:
Compares result with the original number num.
If result is equal to num, prints that num is an Armstrong number.
Otherwise, prints that num is not an Armstrong number.

Returning Control to the Operating System:
The main function returns 0 to the operating system, indicating successful program execution.
*/


/*
An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, or pluperfect number) 
is a number that is equal to the sum of its own digits each raised to the power of the number of digits in the number.

For example, let's consider the number 153:

The number of digits in 153 is 3.
Each digit of 153 is raised to the power of 3 (the number of digits), and the results are summed up:
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

As we can see, the sum of the cubes of its digits is equal to the original number itself (153). Therefore, 153 is an Armstrong number.

Another example is the number 407:

The number of digits in 407 is 3.
Each digit of 407 is raised to the power of 3, and the results are summed up:
4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407.
Again, the sum of the cubes of its digits is equal to the original number itself (407), making it an Armstrong number.

Armstrong numbers are a special type of number and are relatively rare. 
They are named after Michael F. Armstrong, who introduced them in 1969. 
These numbers have interesting mathematical properties and are often used in recreational mathematics and programming exercises.
*/

// the first 20 Armstrong numbers: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084