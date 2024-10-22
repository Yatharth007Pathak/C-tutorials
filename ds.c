#include<stdio.h>

int main() {
    char str[] = "Hello, Pointers!";                       // Declare a string

    char *ptr = str;                                       // Declare a pointer to char

    while (*ptr != '\0') {                                 // Print the string using pointer
        printf("%c", *ptr);
        ptr++;
    }

    // Alternatively, we can use a for loop
    
    /*
    for (int i = 0; *(ptr + i) != '\0'; i++) {
        printf("%c", *(ptr + i));
    }
    */

    printf("\n");  

    
    return 0;
    }
    