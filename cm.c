#include<stdio.h>

void DoWork (int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;
    DoWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d \n", sum, prod, avg);
    return 0;
    }

void DoWork (int a, int b, int *sum, int *prod, int*avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}

// Write a function to calculate the sum, product and average of 2 numbers. Print that sum, product and average in main function


/*
This C program performs some calculations in the DoWork function and returns the results through pointers.
Specifically, it calculates the sum, product, and average of two integers a and b. Here's a brief explanation of the program:

In the main function, two integer variables a and b are declared and initialized with the values 3 and 5, respectively.
Three integer variables sum, prod, and avg are declared.
The DoWork function is called, passing the values of a and b along with the addresses of sum, prod, and avg.
Inside the DoWork function, the sum, product and average of a and b are calculated
and stored in the memory locations pointed to by sum, prod and avg pointers, respectively.
The results (sum, product, and average) are printed in the main function.
*/



/*

code defines a function DoWork that takes two integers (a and b) and three pointers to integers (sum, prod, and avg) as parameters.

In the main function, you declare two integers a and b, and three more integers sum, prod, and avg.
We then call the DoWork function, passing the values of a and b and the addresses of sum, prod, and avg.

After the call to DoWork, we print the values of sum, prod, and avg.
Note that these values have been updated by the DoWork function, as you passed their addresses to that function.

The DoWork function takes two integers a and b and three pointers to integers sum, prod, and avg. 
It performs calculations to find the sum, product, and average of a and b and updates the values pointed to by the three pointers. 

*/