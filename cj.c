#include<stdio.h>

void square(int n);                                     // function prototype 1
void _square(int *n);                                   // function prototype 2

int main() {

    int n = 4;

    square(n);                                          // function call 1
    printf("number = %d \n", n);

    _square(&n);                                        // function call 2
    printf("number = %d \n", n);

    return 0;
    }

// call by value
void square (int n) {                                   // function definition 1
    n = n * n;
    printf("square = %d \n", n);
}

// call by reference
void _square(int *n) {                                  // function definition 2
    *n = (*n) * (*n);
    printf("square = %d \n", *n);
}

// here we demonstrates call by value and call by reference in C. 
// The square function squares the value passed by value, while the _square function squares the value passed by reference using a pointer.


/*
pointers in function call
call by value- we pass value of variable as argument
call by argument- we pass address of variable as argument
*/


/*
square function: This function takes an integer n by value and squares it.
However, the original value of n in the main function remains unchanged because it is passed by value.
*/


/*
_square function: This function takes a pointer to an integer n and squares the value at the memory location pointed to by n.
This means the original value of n in the main function is modified since it is passed by reference.
*/

/*
In your main function, you first call square with the variable n, which demonstrates call by value.
Then, you call _square with the address of n, demonstrating call by reference. 
*/



/*
square Function (Call by Value):
The square function takes an integer n as a parameter.
It squares the value of n locally within the function.
The changes made to n inside the function do not affect the original value of n in the main function because it's a "call by value" mechanism.
The result is printed inside the function.


_square Function (Call by Reference):
The _square function takes a pointer to an integer n as a parameter.
It squares the value pointed to by n, modifying the original value of n in the main function.
The changes made to *n inside the function directly affect the original variable n because it's a "call by reference" mechanism.
The result is printed inside the function.


main Function:
Declares an integer variable n and initializes it with the value 4.
Calls the square function, passing the value of n (call by value).
Prints the value of n after the call to square.
Calls the _square function, passing the address of n (call by reference).
Prints the value of n after the call to _square.
*/