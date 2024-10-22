#include <stdio.h>

void printArray(int arr[], int size) {                             // Function to print elements of an array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modifyArray(int arr[], int size) {                            // Function to modify elements of an array
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;                                       // Double each element
    }
}

int main() {
    int aadhar[5] = {1, 2, 3, 4, 5};

    printf("Original Array: ");                                    // Pass array to function to print
    printArray(aadhar, 5);

    modifyArray(aadhar, 5);                                        // Pass array to function to modify

    printf("Modified Array: ");                                    // Print modified array
    printArray(aadhar, 5);

    return 0;
}


/*
each line of this C program:

#include <stdio.h>
This line includes the standard input/output library in C, which is necessary for functions like printf.

void printArray(int arr[], int size) {
This line defines a function named printArray that takes an array arr and its size as parameters and does not return anything (void).

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
Within the printArray function, it uses a loop to iterate through the array and print each element followed by a space. 
After printing all elements, it adds a newline character to move to the next line.

void modifyArray(int arr[], int size) {
This line defines a function named modifyArray that takes an array arr and its size as parameters and does not return anything (void).

    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
Within the modifyArray function, it uses a loop to iterate through the array and doubles each element by multiplying it by 2.

int main() {
This line defines the main function, the entry point of the program.

    int aadhar[5] = {1, 2, 3, 4, 5};
Declares an integer array named aadhar and initializes it with values 1, 2, 3, 4, and 5.

    printf("Original Array: ");
    printArray(aadhar, 5);
Prints a message indicating the original array and then calls the printArray function to print the elements of the array.

    modifyArray(aadhar, 5);
Calls the modifyArray function to modify the elements of the array by doubling each of them.

    printf("Modified Array: ");
    printArray(aadhar, 5);
Prints a message indicating the modified array and then calls the printArray function again to print the modified elements of the array.

    return 0;
}
Indicates the end of the main function and the end of the program. The return value 0 conventionally represents successful execution.
*/