#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "hello";
    char str2[100] = "world";
    char str3[100] = "namaste";
    char str4[100] = "sansaar";
    
    strcpy(str1, str2);
    strcpy(str4, str3);

    printf("string1 = %s\n", str1);
    printf("string4 = %s", str4);

    return 0;
}

/*
This C program begins by including the necessary header files <stdio.h> and <string.h>. Inside the main function, 
it declares four character arrays: str1, str2, str3, and str4, each with a capacity of 100 characters, 
and initializes str1 with the string "hello", str2 with "world", str3 with "namaste", and str4 with "sansaar".

The program then utilizes the strcpy function from the <string.h> library twice. 
The strcpy function is used to copy the content of one string to another. 
In this case, it copies the content of str2 to str1 and the content of str3 to str4.

After these operations, the content of str1 becomes "world" and the content of str4 becomes "namaste".
*/