#include<stdio.h>

int main() {
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("adult \n");
        else 
        printf("not adult \n");
    return 0;
    }

    //if there is only 1 statement in if else, then we can ignore curly braces