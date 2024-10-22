#include<stdio.h>

int main() {
    
int age = 22;
int *ptr = &age;
int _age = *ptr;

printf("%d \n", age);              // prints the value which is stored in variable named age. The output will be 22.
printf("%d \n", *ptr);             // prints the value pointed to by the pointer ptr. Since ptr points to the address of age, this will also print 22.
printf("%d \n", *(&age));          // prints the value which is stored in address of variable age. It takes the address of age with &age and then dereferences it. The output will also be 22.
printf("%d \n", _age);             // prints the value stored in variable _age, which is the value pointed to by ptr. Again, the output will be 22.

    return 0;
    }


    /*
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    These lines declare an integer variable age and initialize it with the value 22.
    Then, a pointer variable ptr is declared and assigned the address of age using the address-of operator &.
    Another integer variable _age is declared and assigned the value pointed to by ptr using the dereference operator *.
    */