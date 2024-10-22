#include<stdio.h>

int main() {
    int aadhar[10];

    // input
    for(int i=0; i<10; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &aadhar[i]);
    }

    // traverse and print
    printf("Traversing the array:\n");
    for(int i=0; i<10; i++) {
        printf("%d index = %d\n", i, aadhar[i]);
    }

    return 0;
}


    // Traversing an array in programming involves visiting each element of the array. I