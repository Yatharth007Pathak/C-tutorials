#include<stdio.h>

int main() {
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
        printf("they can vote \n");
    }
    else {
        printf("not adult \n");
        printf("they can't drive \n");
    }

    printf("thank you \n");    
    return 0;
    }
