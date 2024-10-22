#include<stdio.h>

int main() {
    // 2 × 3
    int marks[2][3];        // _ _ _ | _ _ _

    marks[0][0] = 90;
    marks[0][1] = 85;
    marks[0][2] = 96;

    marks[1][0] = 91;
    marks[1][1] = 87;
    marks[1][2] = 83;

    // Printing the marks
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("marks[%d][%d]: %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
    }

    /* 
    This program uses nested loops to iterate through each element in the 2x3 array 
    and prints the corresponding values along with their indices.
    */