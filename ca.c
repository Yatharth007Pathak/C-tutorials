#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);                                  // function prototype

int main() {
    int science = 98;
    int math = 96;
    int sanskrit = 99;

    printf("percentage is : %d", calcPercentage(science, math, sanskrit));                // function call
    return 0;
    }

int calcPercentage(int science, int math, int sanskrit) {                                 // function definition
    return ((science + math + sanskrit) / 3);
}



    // write a function to calculate percentage of a student from marks in science, math and sanskrit