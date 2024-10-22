#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "hello";
    char str2[100] = "WORLD";
        
    strupr(str1);
    strlwr(str2);

    printf("string1 in upper case is : %s\n", str1);
    printf("string2 in lower case is : %s\n", str2);
    
    return 0;
}

/*
This C program includes the necessary header files <stdio.h> and <string.h>. 
Within the main function, it declares two character arrays: str1 and str2, each with a capacity of 100 characters. 
str1 is initialized with the string "hello" and str2 with "WORLD".

The program then utilizes the functions strupr and strlwr from the <string.h> library.

strupr converts all characters in a string to uppercase. In this case, it converts the content of str1 from "hello" to "HELLO".
strlwr converts all characters in a string to lowercase. Here, it converts the content of str2 from "WORLD" to "world".
After these operations, the content of str1 is "HELLO" and the content of str2 is "world".
*/