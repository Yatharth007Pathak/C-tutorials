#include<stdio.h>

void storeTable(int arr[][10], int n, int m, int number);

int main () {
    int tables [2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i=0; i<10; i++) {
        printf("%d \t", tables[0][i]);    
        }

        printf("\n");

    for(int i=0; i<10; i++) {
        printf("%d \t", tables[1][i]);    
        }

    return 0;
}
    void storeTable(int arr[][10], int n, int m, int number) {
        for(int i=0; i<m; i++) {
            arr[n][i] = number * (i + 1);
        }
    }

// 2D array storing the tables of 2 and 3


/*
This C program defines a function storeTable that populates a 2D array arr with the multiplication table for a given number. 
The main function then uses this function to populate two different rows of a 2D array (tables) with multiplication tables 
for the numbers 2 and 3. Finally, it prints the two tables side by side.

Here's a step-by-step explanation of the code:

storeTable function:
Parameters: arr is the 2D array, n is the row index, m is the number of columns, and number is the multiplier.
The function fills the nth row of the array with the multiplication table for the given number.

main function:
Declares a 2D array tables with dimensions 2x10.
Calls storeTable twice to populate the first row with the multiplication table for 2 and the second row for 3.
Prints the first row of the array. Prints the second row of the array.

Output:
The output of the program will display the multiplication tables for 2 and 3, each with 10 elements, side by side.
*/


/*
note:- when 2D arrays are passed, first dimension is treated as a pointer, 
but second dimension is treated as an actual array, hence the size 10 is mentioned 
*/ 