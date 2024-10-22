#include<stdio.h>                       // This line includes the standard input-output library, allowing us to use functions like printf

int sum(int n);                         // function prototype     declares the function sum with an integer parameter n and returns an integer.

int main() {                            // The main function calls the sum function with the argument 5 and prints the result using printf.
    
printf("sum is : %d", sum(5));          // function call

    return 0;
    }

int sum(int n) {                        // function definition
    if(n == 1) {                        // base case
        return 1;
    }
    int sumNm1 = sum(n-1);              // sum of 1 to n-1                             recursive function
    int sumN = sumNm1 + n;              // sum of (1 to n-1) and n
    return sumN;
}

    // sum of first n natural numbers


    /*
    Recursive Sum Function:
    The sum function is defined recursively. If n is 1, it returns 1. 
    Otherwise, it calculates the sum of the first n-1 natural numbers (sumNm1) and adds n to it (sumN).
    The final result is the sum of the first n natural numbers.
    */



   /*
   int sumNm1 = sum(n-1);
   int sumN = sumNm1 + n;
   return sumN;

   These lines are the key parts of the recursive logic in our sum function. Let's break it down:

   int sumNm1 = sum(n-1);: This line makes a recursive call to the sum function with the argument n-1.
   This is essentially calculating the sum of integers from 1 to n-1, and the result is stored in the variable sumNm1.

   int sumN = sumNm1 + n;: After obtaining the sum of integers from 1 to n-1 (sumNm1), 
   we add the current value of n to it. This step represents the sum of integers from 1 to n.

   return sumN;: The final result, which is the sum of integers from 1 to n, is returned.  

   So, these lines together ensure that our recursive function correctly calculates the sum of integers from 1 to n.
   The base case we've implemented (if (n == 1) return 1;) ensures that the recursion stops when n becomes 1, preventing infinite recursion.  
   */