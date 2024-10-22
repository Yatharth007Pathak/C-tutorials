#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("enter a value for x ");
    scanf("%lf", &x);
    double result = sqrt(x);

    printf("Square root of %f is %f\n", x, result);

    return 0;
}  

// This program calculates the square root of double using the sqrt function from <math.h>.

// The %lf format specifier is used specifically for double types. 


/*
Here's a breakdown of each part:

Include Statements:
#include <stdio.h>: This includes the standard input/output library, which provides functions like printf and scanf.
#include <math.h>: This includes the math library, which provides mathematical functions such as sqrt (square root).

Main Function:
int main() {: This is the main function, the starting point of the program.

Variable Declaration:
double x;: Declares a variable named 'x' of type double, which will be used to store the user's input.

User Input:
printf("enter a value for x ");: Prints a message asking the user to enter a value for 'x'.
scanf("%lf", &x);: Reads a double value entered by the user and stores it in the variable 'x'.

Calculation:
double result = sqrt(x);: Calculates the square root of the entered value using the sqrt function and stores it in the variable 'result'.

Output:
printf("Square root of %f is %f\n", x, result);: Prints the original value of 'x' and its square root.

Return Statement:
return 0;: Indicates that the program has executed successfully, and the main function returns 0 to the operating system.


The program essentially takes a user-inputted value for 'x', calculates its square root, 
and then prints both the original value and its square root.
*/