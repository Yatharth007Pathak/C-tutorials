#include<stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");

    return 0;
    }

    // the ternary operator or copnditional operator (? :) is a concise way of writing an if-else statement.

     /*
     age >= 18 ? printf("adult \n") : printf("not adult \n"); : Uses the ternary operator (? :) 
     to check if the value of age is greater than or equal to 18. If true, it prints "adult"; otherwise, it prints "not adult".
     */