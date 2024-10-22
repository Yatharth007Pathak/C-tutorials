#include<stdio.h>

int main() {

    char str[50];
    gets(str);
    puts(str);    
    
    return 0;
    } 


    // program to ask the user to enter their firstName and print it back to them

    /*
    scanf() canot input multi-word strings with spaces
    here, fgets() and puts() come into picture
    */



    /*
    gets(str) :- input a string (even multiword), dangerous and outdated

    fgets(str, n, file) :- stops when n-1 chars input or new line is entered

    puts(str) :- output a string

    In summary, prefer using fgets() over gets() for reading input as it provides better control over the 
    input buffer size and helps prevent buffer overflow vulnerabilities. 
    puts() is used for writing strings to the console and automatically appends a newline character.
    */