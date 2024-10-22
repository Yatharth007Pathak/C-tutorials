#include<stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    printf("Sum of the elements: %d\n", sum);

    return 0;
}

// program to input 5 elements in an array and print the sum of these 5 elements


/*
here's a breakdown of the code:

#include <stdio.h>: This line includes the standard input-output library in the program. 
This library is required for functions like printf() and scanf().

int main() {: This is the starting point of the program. All C programs must have a main() function, from where the execution begins.

int arr[5];: This line declares an integer array named arr of size 5. This array will be used to store the 5 elements entered by the user.

int sum = 0;: This line initializes a variable sum to 0. 
This variable will be used to calculate the sum of the elements entered by the user.

printf("Enter 5 elements:\n");: This line prints a message prompting the user to enter 5 elements.

for (int i = 0; i < 5; i++) {: This line starts a for loop that iterates 5 times, once for each element the user needs to enter.

printf("Element %d: ", i + 1);: This line prints a message indicating which element the user is entering.

scanf("%d", &arr[i]);: This line reads an integer from the user and stores it in the ith element of the array arr. 
The & operator is used to get the address of the ith element of the array, where the user input will be stored.

sum += arr[i];: This line adds the value of the ith element of the array arr to the sum variable. 
This is done for each element entered by the user.

printf("Sum of the elements: %d\n", sum);: This line prints the sum of all the elements entered by the user.

return 0;: This line indicates the end of the main() function and returns an exit status of 0, indicating successful execution of the program.
*/