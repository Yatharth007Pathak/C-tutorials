#include<stdio.h>

int main() {
    printf("%d \n", 4 == 4);
    printf("%d \n", 5 == 3);

    printf("hi\n");

    printf("%d \n", 3 > 4);
    printf("%d \n", 4 > 3); 
    printf("%d \n", 4 > 4);
    printf("%d \n", 4 >= 4);

    printf("hi\n");

    printf("%d \n", 3 < 4);
    printf("%d \n", 4 < 3);
    printf("%d \n", 3 < 3);
    printf("%d \n ", 3 <= 3);

    printf("hi \n");

    printf("%d \n", 4 != 3);
    printf("%d \n", 4 != 4);
    printf("%d \n", 3 != 3);
    printf("%d \n", 3 != 4);

    return 0;
    }

    // == is known as equal to                 != is kmown as not equal to
    // 1 means true                            0 means false