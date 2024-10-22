#include<stdio.h>
#include<string.h>

int main() {
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";

    strcpy(newStr, oldStr);

    puts(newStr);    

    return 0; 
    }

    // strcpy(newStr, oldStr) copies value of old string to new string

/*
Header Files:
#include<stdio.h>: This line includes the standard input/output functions, which are necessary for using functions like puts.
#include<string.h>: This line includes the string manipulation functions, such as strcpy.

Main Function:
int main(): This is the main function where the execution of the program starts.

Character Arrays:
char oldStr[] = "oldStr";: Declares and initializes a character array oldStr with the content "oldStr".
char newStr[] = "newStr";: Declares and initializes another character array newStr with the content "newStr".

String Copy Operation:
strcpy(newStr, oldStr);: Copies the content of oldStr to newStr using the strcpy function. After this line, newStr will contain "oldStr".

Output:
puts(newStr);: Prints the content of newStr to the console using the puts (put string) function. In this case, it will print "oldStr".

Return Statement:
return 0;: Indicates the successful execution of the program. The value 0 is returned to the operating system.
    */