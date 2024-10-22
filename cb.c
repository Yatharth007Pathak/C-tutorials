#include<stdio.h>

int main() {
    int age = 22;                                 // variable 'age' stores value 22
    int *ptr = &age;                              // pointer 'ptr' stores the address of variable 'age'
    int _age = *ptr;                              // variable '_age' stores the value 22 of address which is stored in pointer 'ptr'

    printf("%d", _age);                           // prints the value stored in variable '_age', which is the value pointed to by 'ptr', which is the value stored in variable 'age'
    return 0;
    }



// Pointers- A variable that stores the memory address of another variable

// * is value at address operator
// & is address of operator


/*
int age = 22;
This line declares an integer variable age and initializes it with the value 22.

int *ptr = &age;
This line declares a pointer variable ptr of type int * (pointer to an integer).
It is assigned the memory address of the variable age using the address-of operator &.

int _age = *ptr;
This line declares an integer variable _age and assigns it the value pointed to by ptr.
The dereference operator * is used to access the value at the memory address stored in ptr
*/


/*
this program declares an integer variable (age), a pointer to an integer (ptr) pointing to the address of age,
and another integer variable (_age) that is assigned the value stored in the memory location pointed to by ptr.
Finally, it prints the value of _age, which is the original value of age
*/