#include<stdio.h>

int fib( int n);                                                    // functon prototype

int main() {
    
int n;
printf("enter number : ");
scanf("%d", &n);

printf("fib of n is : %d \n", fib(n));                              // function call

    return 0;
    }

int fib(int n) {                                                    // function definition
        if(n == 0) {                                                // base case
            return 0;
        }
        if(n == 1) {                                                // base case
            return 1;
        }

    int fibNm1 = fib(n-1);                                          // recursive function
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}


    // write a function to print the nth term of the fibonacci sequence
    // fibonacci sequence is 0,1,1,2,3,5,8,13,21,34,55,89,144,...
    //  fib(n) = fib(n-1) + fib(n-2)
    // fib(0) is 0         fib(1) is 1        fib(2) is 1        fib(3) is 2        fib(4) is 3           fib(5) is 5          fib(6) is 8
    


    /*
    The fib function is declared with a prototype at the beginning of the program.
    In the main function, we prompt the user to enter a number (n) and then call fib(n) to calculate the Fibonacci number for the given input.
    The fib function takes an integer n as an argument.
    It has two base cases: if n is 0, it returns 0, and if n is 1, it returns 1.
    If n is greater than 1, it recursively calls itself twice with the arguments n-1 and n-2.
    The results of the two recursive calls (fibNm1 and fibNm2) are then added together to calculate the Fibonacci number for n.
    The final result (fibN) is returned.
    */



   /*
   int fibNm1 = fib(n-1);: This line makes a recursive call to the fib function with the argument n-1, 
   essentially calculating the Fibonacci number for n-1. The result is stored in the variable fibNm1.

   int fibNm2 = fib(n-2);: Similarly, this line makes a recursive call to the fib function with the argument n-2, 
   calculating the Fibonacci number for n-2. The result is stored in the variable fibNm2.

   int fibN = fibNm1 + fibNm2;: After obtaining the Fibonacci numbers for n-1 and n-2, 
   we add them together to calculate the Fibonacci number for n.

   return fibN;: The final result, which is the Fibonacci number for n, is returned.
   */