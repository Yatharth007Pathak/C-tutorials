#include<stdio.h>

int fact(int n);                                               // function prototype

int main() {
    
printf("factorial is %d", fact(5));                            // function call

    return 0;
    }

    int fact(int n) {                                          // function definition
        printf("calculate fact of n : %d \n", n);
        int factNm1 = fact(n-1);                               // product of 1 to n-1                          recursive function
        int factN = factNm1 * n;                               // product of (1 to n-1) and n
        return factN;
    }


    // factorial of n


    // program will crash because we have missed Base Case due to which recursion will have stack overflow


    // iteratrion has infinite loop when termination condition is missed, due to whichg memory will fill and program will crash
    // recursion have stack overflow when base case is missed, due to which memory will fill and program will crash