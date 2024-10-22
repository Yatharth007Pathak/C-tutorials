#include<stdio.h>
#include<string.h>

int main() {

    char firstStr[] = "Apple";
    char secStr[] = "Banana";

    printf("%d", strcmp(secStr, firstStr));
        
    return 0;
}

    /*
    strcmp(firstStr,. secStr)
    compares 2 strings and returns a value
    0-> string equal
    positive-> first > second (ASCII)
    negative-> second > first (ASCII)
    */

   // The output will be a positive integer, indicating that "Banana" is lexicographically greater than "Apple".