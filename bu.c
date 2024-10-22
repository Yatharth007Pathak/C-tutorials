#include<stdio.h>

void printJSR(int n);                                       // function prototype

int main() {
    
    printJSR(108);                                          // function call

    return 0;
    }

void printJSR(int n) {                                      // function definition
    if (n == 0) {                                           // base case
        return;                                             // Base case: when count is 0, stop recursion
    }
    printf("Jai Shree Ram \n");
    printJSR(n-1);                                          // recursive function
}


// base case is the condition which stops recursion

// The function takes an integer parameter n and recursively prints the message until n becomes 0.

/*
This program prints "Jai Shree Ram" 108 times because the initial call in the main function is printJSR(108). 
The function prints the message and then calls itself recursively with n-1 until n becomes 0, at which point the recursion stops. 
The base case n == 0 ensures that the recursion terminates.
*/