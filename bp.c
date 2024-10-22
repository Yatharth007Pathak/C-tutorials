#include<stdio.h>

void printTable(int n);

int main() {
    int n;
    printf("enter first number : ");
    scanf("%d", &n);

    printTable(n);                     // argument or actual parameter   variable in calling statement of a function is known as argument

    return 0;
    }

    void printTable(int n) {          // parameter or formal parameter   variable in definition statement of a function is known as parameter
    for(int i=1; i<=10; i++) {
        printf("%d \n", i*n);
    }
    }


    /*
    argument are values that are passed in function call
    these are used to send value
    
    parameter are values in function declaration and definition
    these are used to receive value
    */