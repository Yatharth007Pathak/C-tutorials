#include<stdio.h>

int main() {
    int aadhar[10];                   // Declares an integer array named aadhar with 10 elements.

// input loop                         This loop iterates through each element of the array and takes input for each element from the user.
    int *ptr = &aadhar[0];            // Declares a pointer ptr and assigns the address of the first element of the array aadhar to it.
    for(int i=0; i<10; i++) {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
    }

// output loop                        This loop prints the index and the corresponding value of each element in the array.
    for(int i=0; i<10; i++) {
        printf("%d index = %d \n", i, aadhar[i]);
    }

    return 0;                          // Indicates successful execution of the program.
    }