#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], difference[3][3];
    int i, j;

    // Input for first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtracting the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the difference matrix
    printf("difference of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
