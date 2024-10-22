#include <stdio.h>

int main() {
    int firstMatrix[3][3], secondMatrix[3][3], resultMatrix[3][3];
    int i, j, k;

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply the two matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            resultMatrix[i][j] = 0;
            for(k = 0; k < 3; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}