#include<stdio.h>

int main() {
    
    char firstStr[] = "HHHA";
    char secStr[] = "HHHB";

    printf("%d \n", strcmp(firstStr, secStr));

    return 0;
    }


    /*
    In this case, the output will be a negative integer. The specific value depends on the difference between 
    the ASCII values of the first characters where the strings differ. In this example, 
    the ASCII value of 'A' is less than the ASCII value of 'B', so the result of strcmp(firstStr, secStr) 
    will be negative, indicating that "HHHA" is lexicographically smaller than "HHHB".
    */

   /*
   In our case, the strings are "HHHA" and "HHHB". Since the first differing character is 'A' in the first string 
   and 'B' in the second string, 'A' has a lower ASCII value than 'B'. Therefore, the return value of strcmp will be negative
   */