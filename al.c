#include<stdio.h>

int main() {
    char ch;
    printf("enter character ; ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("upper case");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("lower case");
    }
    else {
        printf("not english letter");
    }
    return 0;
    }

// ch >= 60 and ch >= 'A' are both same
// ch >= 97 and ch >= 'a' are both same



    // Write a program to find if a character entered by user is uppper case or not