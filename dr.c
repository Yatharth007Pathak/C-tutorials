#include <stdio.h>
#include <string.h>

int main() {

    char cannotChange[] = "Hi World";
    puts(cannotChange);                                     // Print the initial value
    strcpy(cannotChange, "Hi");                             // Change the content using strcpy
    puts(cannotChange);                                     // Print the updated value
    
    return 0;
}

// If we want to change the content of the array, we should use string manipulation functions like strcpy or sprintf. 

// In this code, the strcpy function is used to copy the content of the new string into the cannotChange array