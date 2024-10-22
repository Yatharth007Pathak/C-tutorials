#include<stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    // Using the array name in an expression
    int *ptr = numbers;

    // ptr now points to the first element of the array
    printf("Value at index 0: %d\n", *ptr);

    return 0;
}


/*
In C, when we use the name of an array in an expression, it decays into a pointer to its first element.
This means that the array's name, when used in certain contexts, is automatically converted to a pointer to the first element of the array.
This behavior is often referred to as the "array decay" or "array-to-pointer decay."
*/


/*
numbers is the name of the array, and when it's used in the assignment int *ptr = numbers;,
it gets automatically converted to a pointer to the first element of the array.
*/

/*
the first index of an array effectively behaves like a pointer to the first element of the array in certain contexts. 
However, keep in mind that this behavior is specific to the use of the array name in expressions, 
and it doesn't mean that an array is exactly the same as a pointer in all respects.
Arrays and pointers have different characteristics and use cases in C
*/