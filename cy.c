#include<stdio.h>

int main() {
    int arr[2][2] = { {1, 2}, {3, 4} };                   // The array arr is declared as a 2x2 array.

    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("arr[0][1]: %d\n", arr[0][1]);
    printf("arr[1][0]: %d\n", arr[1][0]);
    printf("arr[1][1]: %d\n", arr[1][1]);

    return 0;
    }


    // multidimensional arrays

    /*
    A multi-dimensional array is a data structure that can store values in multiple dimensions or levels.
    In programming, it is a way to organize and represent data in a tabular form with rows and columns. 
    The most common types are 2D arrays (two-dimensional arrays) and 3D arrays (three-dimensional arrays), 
    but we can have arrays with more dimensions as well. 
    Multi-dimensional arrays are used in various applications such as image processing, representing matrices in linear algebra, 
    storing and processing data in grids, and more. They provide a convenient way to work with structured data in multiple dimensions.
    */


/*
Header Inclusion:
#include<stdio.h>: Includes the standard input/output library for using functions like printf.

Main Function:
int main(): The entry point of the program. Execution starts from here.
{ and }: Define the scope of the main function.

Array Declaration and Initialization:
int arr[2][2] = { {1, 2}, {3, 4} };: Declares a 2x2 integer array named arr and initializes it with values.
arr[0][0] is initialized to 1.
arr[0][1] is initialized to 2.
arr[1][0] is initialized to 3.
arr[1][1] is initialized to 4.

Print Statements:
printf("arr[0][0]: %d\n", arr[0][0]);: Prints the value of arr[0][0].
printf("arr[0][1]: %d\n", arr[0][1]);: Prints the value of arr[0][1].
printf("arr[1][0]: %d\n", arr[1][0]);: Prints the value of arr[1][0].
printf("arr[1][1]: %d\n", arr[1][1]);: Prints the value of arr[1][1].

Return Statement:
return 0;: Indicates successful execution to the operating system.
   */