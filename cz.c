#include<stdio.h>

int main() {
    // 2 × 3    2x3 array named marks
    int marks[2][3];        // _ _ _ | _ _ _

    marks[0][0] = 90;
    marks[0][1] = 85;
    marks[0][2] = 96;

    marks[1][0] = 91;
    marks[1][1] = 87;
    marks[1][2] = 83;

    printf("marks of 1st student in 1st subject are %d \n", marks [0][0]);
    printf("marks of 1st student in 2nd subject are %d \n", marks [0][1]);
    printf("marks of 1st student in 3rd subject are %d \n", marks [0][2]);
    printf("marks of 2nd student in 1st subject are %d \n", marks [1][0]);
    printf("marks of 2nd student in 2nd subject are %d \n", marks [1][1]);
    printf("marks of 2nd student in 3rd subject are %d \n", marks [1][2]);

    return 0;
    }

    // program to store marks of 2 students having 3 subjects
    