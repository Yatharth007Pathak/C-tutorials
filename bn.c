#include<stdio.h>

void namaste();
void bonjour();

int main() {
    printf("enter f for french and i for indian : ");
    char ch;
    scanf("%c", &ch);

    namaste();

    return 0;
    }

void namaste() {
    printf("namaste \n");
    bonjour();
}

void bonjour() {
    printf("bonjour \n");
}

// a function gets called directly or indirectly from main