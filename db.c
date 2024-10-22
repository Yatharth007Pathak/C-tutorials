#include <stdio.h>

int main() {
    // Declaration and initialization of a 2x3 integer array
    int matrix2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing and printing elements of the 2D array
    printf("matrix2D[0][0]: %d\n", matrix2D[0][0]);
    printf("matrix2D[0][1]: %d\n", matrix2D[0][1]);
    printf("matrix2D[0][2]: %d\n", matrix2D[0][2]);
    printf("matrix2D[1][0]: %d\n", matrix2D[1][0]);
    printf("matrix2D[1][1]: %d\n", matrix2D[1][1]);
    printf("matrix2D[1][2]: %d\n", matrix2D[1][2]);

    return 0;
    }


// example of 2D array