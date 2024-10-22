#include <stdio.h>

int main() {
    int arr[5];

    // Taking input for the array elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// program to enter 5 elements in an array and sort them

/*
breakdown of what each part of the code does:

#include <stdio.h>: This line includes the standard input-output library which contains functions like printf() and scanf().

int main() { ... }: This is the main function where the execution of the program begins. It returns an integer value 
indicating the exit status of the program.

int arr[5];: This declares an array named arr of integers with a size of 5.

Input: The program prompts the user to enter 5 integer values which are then stored in the array arr using a for loop and scanf() function.

Sorting: The array arr is then sorted in ascending order using the Bubble Sort algorithm. 
Nested for loops are used for comparison and swapping adjacent elements if they are in the wrong order.

Output: After sorting, the program prints the sorted array elements using a for loop and printf() function.

return 0;: This statement indicates that the program has executed successfully and returns 0 to the operating system.
*/