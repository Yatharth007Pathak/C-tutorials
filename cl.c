#include<stdio.h>

void printAddress(int n);           // declares the function printAddress with an integer parameter n. The function prototype informs the compiler about the function's existence and its signature.

int main() {
    int n = 4;

    printf("%p\n", &n);             // prints the address of the variable n using the %p format specifier. The &n represents the address of the variable.
    printAddress(n);                // This line calls the printAddress function, passing the value of n as an argument.

    return 0;
}

void printAddress(int n) {
    printf("%p\n", &n);
}


/*
the memory addresses printed in the main and printAddress functions may be different 
this is due to the fact that n is passed by value (or call by value) to the printAddress function.
This means that the printAddress function receives a copy of the value of n,
and the memory address of this copy will be different from the memory address of n in the main function.
*/


/*

void printAddress(int n) {
    printf("%p\n", &n);
}

This function definition prints the address of the parameter n using the %p format specifier.
Note that the address printed in this function will be the address of the local variable n within the function, not the same as the address of n in the main function.

Keep in mind that in the printAddress function, the address being printed is the address of the
local variable n within that function, not the address of the n variable in the main function.
This is because the function parameter n shadows the variable n from the main function.
If we want to print the address of the variable in the main function, we would need to pass
its address explicitly to the function using pointers.
*/