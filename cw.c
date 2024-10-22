#include<stdio.h>

    void printNumbers(int arr[], int n);                          // function prototype

    int main() {
        int arr[]= {1, 2, 3, 4, 5, 6};
        printNumbers(arr, 6);                                     // function call
        return 0;
    }

    void printNumbers(int arr[], int n) {                         // function definition
        for(int i=0; i<n; i++) {
            printf("%d \t", arr[i]);
        }
        printf("\n");
    }


    // arrays as function argument


    // function declaration             void printNumbers(int arr[], int n)  OR   void printNumbers(int *arr, int n)

    // function call                 printNumbers(int *arr, int n)


    /*
    In C, we can pass arrays to functions as arguments.
    When we pass an array to a function, we are essentially passing the base address of the array (address of the first element).
    */


   /*
   brief explanation of our code:
   we include the standard input-output header file (#include<stdio.h>) to use functions like printf.
   we declare a function printNumbers that takes an integer array (arr) and its size (n) as parameters. 
   The function prints each element of the array using a for loop.
   In the main function, we declare an integer array arr with some initial values {1, 2, 3, 4, 5, 6}.
   we call the printNumbers function with the array arr and its size 6 as arguments.
   The program prints the elements of the array to the console.
   The main function returns 0 to indicate successful program execution.
   */