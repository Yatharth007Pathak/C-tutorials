#include<stdio.h>

int main() {
    int n;
    printf("enter n (n>2) : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \n", fib[i]);
    }

    return 0;
    }


    // program to store the first n fibonacci numbers   0, 1, 1, 2, 3, 5, 8, 13, 21, 34....
    // n fibonacci number = (n-1) fibonacci number + (n-2) fibonacci number