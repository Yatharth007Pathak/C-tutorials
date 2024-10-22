#include <stdio.h>

int countOdd(int arr[], int n);

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    printf("Number of odd numbers: %d\n", countOdd(arr, 6));
    return 0;
    }

    int countOdd(int arr[], int n) {
        int count = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] % 2 != 0) {
                count++;
            }
        }
        return count;
    }

    // function to count the number of odd numbers in an array

    /*
    provided code is a C program that defines a function countOdd to count the number of odd numbers in an array.
    The main function then uses this function to count the odd numbers in an array {1, 2, 3, 4, 5, 6} and prints the result.
    */

/*
Header Inclusion:
#include <stdio.h>: Includes the standard input/output library for using functions like printf.

Function Definition (countOdd):
int countOdd(int arr[], int n): Defines a function named countOdd that takes an array (arr) and its size (n) as parameters.
The function returns an integer representing the count of odd numbers in the array.

Function Implementation:
int count = 0;: Initializes a variable count to zero, which will be used to store the count of odd numbers.
for(int i = 0; i < n; i++): Iterates through each element of the array using a for loop.
if(arr[i] % 2 != 0): Checks if the current element is odd by checking if the remainder when divided by 2 is not equal to 0.
count++;: Increments the count if the current element is odd.
The function returns the final count of odd numbers.

Main Function:
int main(): The entry point of the program.
int arr[] = {1, 2, 3, 4, 5, 6};: Initializes an array arr with values {1, 2, 3, 4, 5, 6}.
printf("Number of odd numbers: %d\n", countOdd(arr, 6));: Calls the countOdd function, passing the array arr and its size (6), and prints the result.

Output:
The program prints the number of odd numbers in the array {1, 2, 3, 4, 5, 6} using the printf statement.
*/