#include <stdio.h>

int main() {
    int arr[5], search_element, found = 0;

    // Taking input for the array elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Asking user to enter the element to search
    printf("\n Enter the element to search: ");
    scanf("%d", &search_element);

    // Searching for the element in the array
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search_element) {
            printf("Element %d found at index %d\n", search_element, i);
            found = 1;
            break; // Break the loop once the element is found
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array\n", search_element);
    }

    return 0;
}

// program to enter 5 elements in an array and search a particular element entered by the user


/*
 here's a breakdown of the provided C code:

#include <stdio.h>: This line includes the standard input-output library in the program. 
This library provides functions like printf() and scanf() which are used for input and output operations.

int main() {: This is the starting point of the program. All the code inside the main() function will be executed when the program is run.

int arr[5], search_element, found = 0;: This line declares three variables.
arr[5] declares an array of integers with a size of 5.
search_element is declared as an integer and will be used to store the element that the user wants to search for.
found is declared as an integer and initialized to 0. It will be used as a flag to indicate whether the element was found in the array or not.

printf("Enter 5 elements:\n");: This line prints a message asking the user to enter 5 elements.

for (int i=0; i<5; i++) { scanf("%d", &arr[i]); }: This is a loop that iterates 5 times, 
each time taking an integer input from the user and storing it in the array arr.

printf("\n Enter the element to search: ");: This line prints a message asking the user to enter the element they want to search for.

scanf("%d", &search_element);: This line reads an integer input from the user and stores it in the variable search_element.

for (int i=0; i<5; i++) { if (arr[i] == search_element) { printf("Element %d found at index %d\n", search_element, i); found = 1; break; } }: 
This is a loop that iterates through the array arr to search for the element search_element. 
If the element is found, it prints a message indicating the index at which the element is found, 
sets the found flag to 1, and breaks out of the loop.

if (!found) { printf("Element %d not found in the array\n", search_element); }: This condition checks if the found flag is 
still 0 after the loop. If it is, it means the element was not found in the array, and a message indicating that is printed.

return 0;: This statement indicates that the program has executed successfully and 
returns 0 to the operating system, indicating successful termination of the program.
*/