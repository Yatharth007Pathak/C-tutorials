#include <stdio.h>

// Function prototype
int addNumbers(int a, int b);

int main() {
    // Variable declaration and initialization
    int num1 = 10;
    int num2 = 20;

    // Arithmetic operations
    int sum = addNumbers(num1, num2);

    // Control flow statements
    if (sum > 15) {
        printf("Sum is greater than 15.\n");
    } else {
        printf("Sum is not greater than 15.\n");
    }

    // Looping construct
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i + 1);
    }

    // Switch statement
    int choice = 2;
    switch (choice) {
        case 1:
            printf("Choice is 1\n");
            break;
        case 2:
            printf("Choice is 2\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    // Data types
    char character = 'A';
    float floatValue = 3.14;
    double doubleValue = 2.71828;

    // Array
    int numbers[] = {1, 2, 3, 4, 5};

    // Pointer
    int* ptr = &num1;

    // Structure
    struct Point {
        int x;
        int y;
    };

    // Enum
    enum Color { RED, GREEN, BLUE };

    // Function call
    printf("Sum of numbers: %d\n", sum);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}

// This code includes various C keywords such as int, float, char, if, else, for, while, switch, case, default, struct, enum, return, and more



/*
In the C programming language, keywords are reserved words that have special meanings and cannot be used as identifiers 
(such as variable names or function names). These keywords form the fundamental building blocks 
of C programs and define the basic syntax and structure of the language.

Here are 32 keywords in the C language:

auto: Specifies automatic storage duration for a variable.
break: Terminates the nearest enclosing loop or switch statement.
case: Labels a specific value within a switch statement.
char: Declares a character data type.
const: Specifies that a variable's value cannot be changed.
continue: Jumps to the next iteration of a loop.
default: Provides a default case for a switch statement.
do: Starts a do-while loop.
double: Declares a double-precision floating-point data type.
else: Specifies an alternative branch in an if statement.
enum: Defines an enumeration data type.
extern: Declares that a variable or function is defined in another file or program.
float: Declares a single-precision floating-point data type.
for: Starts a for loop.
goto: Transfers control to a labeled statement.
if: Tests a condition and executes code based on the result.
int: Declares an integer data type.
long: Declares a long integer data type.
register: Suggests to the compiler to store the variable in a CPU register.
return: Exits a function and optionally returns a value.
short: Declares a short integer data type.
signed: Specifies that a data type can represent both positive and negative values.
sizeof: Returns the size, in bytes, of a data type or object.
static: Specifies that a variable or function has static scope.
struct: Defines a structure data type.
switch: Selects one of many code blocks to execute, based on the value of an expression.
typedef: Creates a new type using an existing type.
union: Defines a union data type.
unsigned: Specifies that a data type can only represent non-negative values.
void: Specifies that a function returns no value or that a pointer has no associated data type.
volatile: Indicates that a variable can be modified by external entities.
while: Starts a while loop.
*/