#include<stdio.h>

int main() {
    
int x;
printf("enter x : ");
scanf("%d", &x);

int y;
printf("enter y : ");
scanf("%d", &y);

x > y ? printf("x is greater \n") : printf("y is greater \n");
x > y ? printf("%d \n", x) : printf("%d \n", y);

    return 0;
    }

    /*
    The basic syntax of the ternary operator is:
    
    condition ? expression_if_true : expression_if_false;

    Here's how it works:

    condition: An expression that evaluates to either true or false.
    expression_if_true: The value or expression to be returned if the condition is true.
    expression_if_false: The value or expression to be returned if the condition is false.  
    */