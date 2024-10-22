#include<stdio.h>

int main() {
    
    char firstStr[] = "shiva";
    char secStr[] = "shiva";

    printf("%d \n", strcmp(firstStr, secStr));

    return 0;
    }

    /*
    In our C program, we are comparing two identical strings, "shiva" and "shiva", using the strcmp function. 
    Since the strings are the same, the strcmp function will return 0. This indicates that both strings are equal.

    Therefore, when we run this program, the output will be 0.
    */
