#include<stdio.h>                        // This line includes the standard input-output library.

int main() {                             // This line starts the main function, the entry point of every C program.

    int i = 5;                           // This line declares an integer variable named i and initializes it with the value 5
    int *ptr = &i;                       // declares a pointer to an integer named ptr and assigns the address of the i variable to it using the address-of operator &.
    int **pptr = &ptr;                   // declares a pointer to a pointer to an integer named pptr and assigns the address of the ptr variable to it.

    printf("%d \n", *ptr);               // prints the value stored at 'address stored in ptr' i.e prints value of i
    printf("%d \n", *pptr);              // prints the value stored at 'address stored in pptr' i.e prints address of ptr
    printf("%d \n", **pptr);             // pptr stores address of ptr, ptr stores address of i, value of i gets printed

    return 0;                            // indicates the end of the main function and the end of the program. Used to indicate successful execution of the program.
    }


    // print the value of 'i' from its pointer to pointer



    /*
    printf("%d \n", *ptr);
    This line prints the value pointed to by the ptr pointer. Since ptr points to the address of the i variable,
    this will print the value of i, which is 5.

    printf("%d \n", *pptr);
    This line prints the value pointed to by the pptr pointer. This value is the address stored in ptr.
     The output will be the address of the i variable.

    printf("%d \n", **pptr);
    This line prints the value pointed to by the double pointer pptr.
    This value is the value stored at the address stored in ptr, which is the value of i. The output will be 5.
    */