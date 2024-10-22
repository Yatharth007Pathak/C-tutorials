#include<stdio.h>

int main() {
    
    char cannotChange[] = "Hi World";
    puts(cannotChange);
    cannotChange = "Hi";
    puts(cannotChange);
    
    return 0;
    } 

    /*
    The code we provided has a compilation error. In C, we cannot assign a new value to an array once it 
    has been initialized using the array syntax. The line cannotChange = "Hi"; will result in a compilation error.
    */