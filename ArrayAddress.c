#include <stdio.h>

int main() {
    int arr[5];
    
    // Taking input for the array elements
    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Printing elements along with their memory addresses
    printf("\nElements in the array and their memory addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p or %u\n", i+1, arr[i], (void*)&arr[i], (void*)&arr[i]);

    }
    
    return 0;
}

// program to enter 5 elements in an array and print them along with their address of the memory location