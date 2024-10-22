#include<stdio.h>

void swap(int a, int b);                                      // function prototype 1
void _swap(int *a, int *b);                                   // function prototype 2

int main() {
    
int a = 3, b = 5;
swap(a, b);                                                   // function call 1
printf("a = %d and b = %d \n", a , b);

_swap(&a, &b);                                                // function call 2
printf("a = %d and b = %d \n", a , b);

    return 0;
    }

// call by value
void swap(int a, int b){                                      // function definition 1         
    int t = a;
    a = b;
    b = t;
    printf("a = %d and b = %d \n", a , b);
}

// call b y reference
void _swap(int *a, int *b) {                                  // function definition 2
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d and b = %d \n", *a , *b);
}

    // swap 2 numbers, a and b



/*
swap Function (Call by Value):

The swap function takes two integers a and b as parameters.
It swaps the values of a and b locally within the function.
The changes made to a and b inside the function do not affect the original values of a and b in the main function because it's a "call by value" mechanism.
The result is printed inside the function.

_swap Function (Call by Reference):
The _swap function takes two pointers to integers a and b as parameters.
It swaps the values pointed to by a and b, modifying the original values of a and b in the main function.
The changes made to *a and *b inside the function directly affect the original variables a and b because it's a "call by reference" mechanism.
The result is printed inside the function.

main Function:
Declares two integers a and b and initializes them with the values 3 and 5.
Calls the swap function, passing the values of a and b (call by value).
Prints the values of a and b after the call to swap.
Calls the _swap function, passing the addresses of a and b (call by reference).
Prints the values of a and b after the call to _swap.
*/