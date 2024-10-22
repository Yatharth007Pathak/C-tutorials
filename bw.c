#include<stdio.h>

int fact(int n);                            // function declaration

int main() {                                // The main function calls the fact function with the argument 5 and prints the result using printf.
    
printf("factorial is %d", fact(5));

    return 0;
    }

    int fact(int n) {
        if(n == 1) {                                           // base case
            return 1;
        }
        int factNm1 = fact(n-1);                               // product of 1 to n-1                          recursive function
        int factN = factNm1 * n;                               // product of (1 to n-1) and n
        return factN;
    }


    // factorial of n


    /*
    Recursive Factorial Function:
    The fact function is defined recursively. If n is 1, it returns 1.
    Otherwise, it calculates the factorial of n-1 (factNm1) and multiplies it by n (factN). 
    The final result is the factorial of n.
    */