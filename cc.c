#include<stdio.h>

int main() {
    
int age = 20;
int *ptr = &age;
int _age = *ptr;
printf("%d \n", _age);                        // prints the integer stored in variable 'age'


char hashtag = '#';
char *potr = &hashtag;
char _hashtag = *potr;
printf("%c \n", _hashtag);                    // prints the character stored in variable 'hashtag'

float price = 100.00;
float *pter = &price;
float _price = *pter;
printf("%f \n", _price);                      // prints the floating value stored in variable 'price'

    return 0;
    }


    /*
    declaring pointers
    int *ptr stores the address of integer variable
    char *ptr stores the address of character variable
    float *ptr stores the address of floating variable
    */