#include<stdio.h>

int main() {
float price = 200.00;     // This line declares a float variable named price and initializes it with the value 200.00.
float *ptr = &price;      // declares a pointer to a float named ptr and assigns the address of the price variable to it using address-of operator &.
float **pptr = &ptr;      // declares a pointer to a pointer to a float named pptr and assigns the address of the ptr variable to it.

return 0;
}


    // pointer to pointer or double pointer can store the address of a pointer variable

    /*
    poointer to pointer syntax
    int **ptr stores the address of integer pointer
    char **ptr stores the address of character pointer
    float **ptr stores the address of floating pointer
    */