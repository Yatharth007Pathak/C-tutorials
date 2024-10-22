#include<stdio.h>

int main() {
int isSunday = 1;
int isSnowing = 1;
printf("%d \n", isSunday && isSnowing);

printf("hi \n");

int isMonday = 0;
int isRaining = 1;
printf("%d \n", isMonday || isRaining);

printf("hi \n");

int x;
printf("enter number : ");
scanf("%d", &x);
printf("%d \n", x>9 && x<100);
    return 0;
    }

    /*
    Print 1 (true) or O (false) for following statements :
    a. if it's sunday & it's snowing -> true
    b. if it's monday or it's raining -> true
    c. if a number is greater than 9 & less than 100 -> true    (2 digit number)
    */