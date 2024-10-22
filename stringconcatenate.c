#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "hello";
    char str2[100] = "world";
    
    strcat(str1, str2);
    strcat(str2, str1);

    printf("string1 = %s\n", str1);
    printf("string2 = %s", str2);

    return 0;
}

/*
This C program first includes the necessary header files <stdio.h> and <string.h>. 
In the main function, it declares two character arrays str1 and str2, each with a capacity of 100 characters, 
initialized with the strings "hello" and "world" respectively.

The program then uses the strcat function from the <string.h> library twice. The strcat function is used to concatenate (append) 
the content of the second string (str2) to the end of the first string (str1). After this operation, 
str1 becomes "helloworld". Then, strcat is used again, this time to concatenate the content of str1 to the end of str2. 
After this second operation, str2 becomes "worldhelloworld".

Finally, the program prints out the contents of both str1 and str2 using printf statements
*/