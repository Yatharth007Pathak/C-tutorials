#include <stdio.h>

// Function to print stars in a right triangle pattern
void printRightTriangle(int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print stars in an inverted right triangle pattern
void printInvertedRightTriangle(int rows) {
    int i, j;
    for (i = rows; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print stars in a pyramid pattern
void printPyramid(int rows) {
    int i, j, space;
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Right Triangle Pattern:\n");
    printRightTriangle(rows);

    printf("\nInverted Right Triangle Pattern:\n");
    printInvertedRightTriangle(rows);

    printf("\nPyramid Pattern:\n");
    printPyramid(rows);

    return 0;
}
