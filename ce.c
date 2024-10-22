#include<stdio.h>

int main() {
    
int age = 20;
int *ptr = &age;
printf("%p \n", &age);
printf("%u \n", &age);

char hashtag = '#';
char *potr = &hashtag;
printf("%p \n", &hashtag);
printf("%u \n", &hashtag);

float price = 100.00;
float *pter = &price;
printf("%p \n", &price);
printf("%u \n", &price);

    return 0;
    }


    /*
    The dereference operator in C is denoted by the asterisk *. It is used in two main contexts:

    Declaration of Pointers:
    When declaring a pointer variable, the asterisk is used to specify that the variable is a pointer
    and to denote the data type it points to. For example:
    int *ptr;                                                          // Declares a pointer to an integer

    Dereferencing Pointers:
    When we have a pointer variable pointing to a memory location, the dereference operator is used to access
    the value stored at that memory location. For example:
    int x = 42;
    int *ptr = &x;                                                     // Pointer pointing to the address of x
    int value = *ptr;                                                  // value now contains 42
    */