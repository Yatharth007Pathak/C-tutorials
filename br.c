#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("enter first number : ");
    scanf("%d", &n);

    printf("%f \n", pow(n, 2));

    return 0;
    }

    // use library function to calculate the square of a number


    //The %f format specifier is used for printing floating-point numbers, and pow function returns a double value 