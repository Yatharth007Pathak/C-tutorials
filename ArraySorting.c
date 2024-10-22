#include <stdio.h>

int main() {
    int arr[5], temp;

    // Input 5 elements
    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the elements
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("\nSorted array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// program to enter 5 elements in an array and sort them


/*
break down the provided C code point by point:

#include <stdio.h>: This line includes the standard input/output library in the program. 
It allows the program to use functions like printf() and scanf().

int main() {: This line begins the main() function, which is the entry point of the program. It returns an integer value.

int arr[5], temp;: This line declares an integer array arr of size 5 and an integer variable temp.

printf("Enter 5 elements:\n");: This line prints a message asking the user to enter 5 elements.

for(int i = 0; i < 5; i++) { scanf("%d", &arr[i]); }: This for loop reads 5 integers from the user and stores them in the array arr.

for(int i = 0; i < 5; i++) { for(int j = i + 1; j < 5; j++) { if(arr[i] > arr[j]) { temp = arr[i]; arr[i] = arr[j]; arr[j] = temp; } } }: 
This nested loop structure is used to sort the elements of the array arr in ascending order using a simple sorting algorithm known as Bubble Sort.

printf("\nSorted array:\n");: This line prints a message indicating that the sorted array is going to be displayed.

for(int i = 0; i < 5; i++) { printf("%d ", arr[i]); }: This for loop is used to print the elements of the sorted array arr.

return 0;: This line returns 0 from the main() function, indicating successful execution of the program.

}: This line marks the end of the main() function.
*/



/*
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, 
and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. 
It is named Bubble Sort because smaller elements gradually "bubble" to the top of the list like bubbles rising in a liquid.
*/