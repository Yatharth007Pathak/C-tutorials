#include<stdio.h>

int main() {

    char fullName[50];
    printf("Enter your full name (up to 49 characters): ");
    scanf("%49[^\n]", fullName);
    printf("your full name is %s", fullName);
    return 0;    
}


    // program to ask the user to enter their firstName and print it back to them

    /*
    Our program is designed to take input for a full name and then print it. However, there is a potential issue 
    with the scanf function in our code. The %s format specifier in scanf stops reading input when it encounters 
    a whitespace character (space, tab, newline), so it won't capture the full name if it contains spaces.

    To fix this issue, we can use the %[^\n] format specifier in scanf to read the entire line, including spaces. 
    The %[^\n] format specifier tells scanf to read characters until it encounters 
    a newline (\n) character, allowing it to capture the entire line of input

    The %49[^\n] format specifier in scanf is used to read up to 49 characters until 
    a newline character is encountered, preventing buffer overflow.
    */