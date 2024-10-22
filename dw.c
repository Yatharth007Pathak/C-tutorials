#include<stdio.h>
#include<string.h>

int main() {

    char firstStr[100] = "hello ";
    char secStr[] = "world";

    strcat(firstStr, secStr);

    puts(firstStr);
    
    return 0;
    } 

    // strcat(firstStr, secStr) concatenates first string with second string

/*
Header Files:
#include<stdio.h>: This line includes the standard input/output functions, which are necessary for using functions like puts.
#include<string.h>: This line includes the string manipulation functions, such as strcat.

Main Function:
int main(): This is the main function where the execution of the program starts.

Character Arrays:
char firstStr[100] = "hello ";: Declares and initializes a character array firstStr with enough space 
to hold the concatenated strings. It is initially set to "hello ".
char secStr[] = "world";: Declares and initializes another character array secStr with the content "world".

String Concatenation Operation:
strcat(firstStr, secStr);: Concatenates the content of secStr to the end of firstStr using the strcat function. 
After this line, firstStr will contain "hello world".

Output:
puts(firstStr);: Prints the content of firstStr (the concatenated string) to the console using the puts (put string) function. 
In this case, it will print "hello world".

Return Statement:
return 0;: Indicates the successful execution of the program. The value 0 is returned to the operating system.
*/