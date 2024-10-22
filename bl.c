#include<stdio.h>

void hi();                                // function declartion
void bye();

int main() {

    hi();                                 // function call
    bye();
 
    bye();
    hi();

   return 0;
    }

    void hi() {                           // functiion definition
        printf("hi \n");
    }

    void bye() {
        printf("bye \n");
    }