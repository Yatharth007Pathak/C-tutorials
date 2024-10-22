#include<stdio.h>

int main() {

    char *canChange = "Hello World";                         // Using a pointer to a string literal
    puts(canChange);
    canChange = "Hello";                                     // Reassigning the pointer to a different string literal
    puts(canChange);

    return 0;
    }


    /*
    In this code, canChange is initially pointing to the string literal "Hello World". 
    Then, it's reassigned to point to the string literal "Hello". This works fine.
    */


    /*
    String using Pointers

    char *str="Hello World";
    store string in memory and the assigned address is stored in the char pointer 'str'

    char *str="Hello World";                  :- Can be reinitialized

    char str[]="Hello World";                 :- Canot be reinitialized
    */
    