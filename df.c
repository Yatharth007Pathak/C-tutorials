#include <stdio.h>

void reverse(int arr[], int n);                                // Function prototypes
void printArr(int arr[], int n);

int main () {
    int arr[] = {1, 2, 3, 4, 5};                               // Array initialization

    reverse(arr, 5);                                           // Reverse the array                 call by reference
    printArr(arr, 5);                                          // Print the reversed array          call by reference

    return 0;
    }

    void printArr(int arr[], int n) {                          // Function to print the elements of an array
        for(int i=0; i<n; i++) {
            printf("%d \t", arr[i]);
        }
        printf("\n");
    }

    void reverse(int arr[], int n) {                           // Function to reverse the elements of an array
        for(int i=0; i<n/2; i++) {
            int firstVal = arr[i];
            int secondVal = arr[n-i-1];
            arr[i] = secondVal;
            arr[n-i-1] = firstVal;
        }
    }    

 
     // function to reverse an array


     /*
     C code demonstrates a program that reverses the elements of an integer array using a reverse function 
     and then prints the reversed array using a printArr function. 
     */


    /*
    The reverse function achieves this by swapping elements from the beginning and the end of the array until the midpoint is reached. 
    The printArr function is then used to print the reversed array.
    */