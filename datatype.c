#include <stdio.h>

int main() {
    int integerVariable = 10;
    float floatVariable = 3.14;
    double doubleVariable = 2.71828;
    char charVariable = 'A';
    unsigned int unsignedIntVariable = 42;
    long longVariable = 123456789;
    long long longLongVariable = 9876543210;
    short shortVariable = 32767;
    unsigned short unsignedShortVariable = 65535;

    printf("Integer: %d \n", integerVariable);
    printf("Float: %f \n", floatVariable);
    printf("Double: %lf \n", doubleVariable);
    printf("Char: %c \n", charVariable);
    printf("Unsigned Int Variable: %u \n", unsignedIntVariable);
    printf("Long Variable: %ld \n", longVariable);
    printf("Long Long Variable: %lld \n", longLongVariable);
    printf("Short Variable: %hd \n", shortVariable);
    printf("Unsigned Short Variable: %hu \n", unsignedShortVariable);

    return 0;
}


/*
In C programming, data types are used to define the type of data that a variable can store. Here are some common data types in C:

Basic Data Types:
int: Integer data type, used to store whole numbers.
float: Floating-point data type, used to store real numbers with decimal points.
double: Double-precision floating-point data type, provides higher precision than float.
char: Character data type, used to store single characters.

Derived Data Types:
Array: A collection of elements of the same data type.
Pointer: A variable that stores the memory address of another variable.
Structure: A user-defined data type that allows grouping variables of different data types under a single name.
Union: Similar to a structure but all members share the same memory location, allowing different data types to be stored in the same memory space.

Enumeration Data Type:
enum: A user-defined data type that consists of named integer constants.

Void Data Type:
void: Denotes absence of a data type. It is often used as a return type for functions that do not return a value.

Modifiers:
short: Modifies the size of the int data type to use less memory.
long: Modifies the size of int or double data types to use more memory.
*/