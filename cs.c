#include<stdio.h>

int main() {
    int age = 35;
    int _age = 36;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u \n", ptr);
    printf("%u \n", _ptr);

    printf("difference = %u \n", ptr - _ptr);

    printf("comparision = %u \n", ptr == _ptr);

    _ptr = &age;
    printf("comparision = %u \n", ptr == _ptr);

    return 0;
    }


    // we can also subtract one pointer from another (note: only same type of pointers can be subtracted)
    // we can also compare two pointers

    /*
    Explanation:
    int age = 35;: Declares an integer variable age and initializes it with the value 35.
    int _age = 36;: Declares another integer variable _age and initializes it with the value 36.
    int *ptr = &age;: Declares an integer pointer ptr and assigns the address of the age variable to it.
    int *_ptr = &_age;: Declares another integer pointer _ptr and assigns the address of the _age variable to it.
    printf("%u \n", ptr);: Prints the address stored in the pointer ptr.
    printf("%u \n", _ptr);: Prints the address stored in the pointer _ptr.
    printf("difference = %u \n", ptr - _ptr);: Calculates and prints the difference between the addresses pointed to by ptr and _ptr. This demonstrates pointer arithmetic.
    printf("comparison = %u \n", ptr == _ptr);: Compares the addresses pointed to by ptr and _ptr and prints the result. If the addresses are the same, it will print 1 (true), otherwise 0 (false).
    _ptr = &age;: Changes the value of _ptr to point to the address of the age variable.
    printf("comparison = %u \n", ptr == _ptr);: Compares the addresses pointed to by ptr and _ptr again and prints the result.
    */