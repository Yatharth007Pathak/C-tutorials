#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];
    int i, j;

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose matrix
    printf("Transpose of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) { 
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}