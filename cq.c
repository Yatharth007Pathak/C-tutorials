#include<stdio.h>

int main() {
    
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    printf("hi \n");

    float price = 50.00;
    float *potr = &price;
    printf("potr = %u \n", potr);
    potr++;
    printf("potr = %u \n", potr);
    potr--;
    printf("potr = %u \n", potr);

    printf("hi \n");

    char star = '*';
    char *pter = &star;
    printf("pter = %u \n", pter);
    pter++;
    printf("pter = %u \n", pter);
    pter--;
    printf("pter = %u \n", pter);

    return 0;
    }


// pointer arithmetic- pointer can be incremented and decremented


/*
Pointer arithmetic in C involves manipulating pointers to access or modify the data they point to.
When we increment or decrement a pointer, the address it points to changes based on the size of the data type it is associated with.
Incrementing and Decrementing Pointers:
When we increment a pointer (ptr++), it moves to the next memory location corresponding to the size of the data type it points to.
When we decrement a pointer (ptr--), it moves to the previous memory location.
*/


/*
In C, the sizeof operator is used to determine the size (in bytes) of a particular data type.
The size of an int is commonly 4 bytes on many systems.
The size of a float is commonly 4 bytes on most systems.
The size of a char is always 1 byte in C.
*/


/*
Integer Pointer Example:

int age = 22;: Declares an integer variable age and initializes it with the value 22.
int *ptr = &age;: Declares an integer pointer ptr and assigns the address of the age variable to it.
printf("ptr = %u \n", ptr);: Prints the value of the pointer ptr.
ptr++;: Increments the pointer ptr by the size of an integer.
ptr--;: Decrements the pointer ptr back to its original value.
Float Pointer Example:

float price = 50.00;: Declares a float variable price and initializes it with the value 50.00.
float *potr = &price;: Declares a float pointer potr and assigns the address of the price variable to it.
printf("potr = %u \n", potr);: Prints the value of the pointer potr.
potr++;: Increments the pointer potr by the size of a float.
potr--;: Decrements the pointer potr back to its original value.
Char Pointer Example:

char star = '*';: Declares a char variable star and initializes it with the character '*'.
char *pter = &star;: Declares a char pointer pter and assigns the address of the star variable to it.
printf("pter = %u \n", pter);: Prints the value of the pointer pter.
pter++;: Increments the pointer pter by the size of a char.
pter--;: Decrements the pointer pter back to its original value.
*/