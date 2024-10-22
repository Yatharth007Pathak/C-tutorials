#include<stdio.h>

int main() {
    printf("%d \n", 4>3 && 5>2);
    printf("%d \n", 4>3 && 2>5);
    printf("%d \n", 4<3 && 5>2);
    printf("%d \n", 4<3 && 2>5);

    printf("hi \n");

    printf("%d \n", 4>3 || 5>2);
    printf("%d \n", 4>3 || 2>5);
    printf("%d \n", 4<3 || 5>2);
    printf("%d \n", 4<3 || 2>5);

    printf("hi \n");

    printf("%d \n", !(5>1));
    printf("%d \n", !(2>5));
    printf("%d \n", !( (4>3) && (2>5) ));
    printf("%d \n", !( (4>3) || (2>5) ));

    return 0;
    }


    // && is logical AND operator      & is Bitwise operator
    // || is logical OR operator       | is Bitwise OR operator
    // ! is  logical NOT operator

    /*
    operator precendence
    !
    * / %
    + -
    < <= > >=
    == !=
    &&
    ||
    =
    */