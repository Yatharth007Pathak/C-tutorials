#include<stdio.h>

int main() {
        int n;
    do {
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0) {      // number n is multiple of 7
            break;
        }
    } while (1);

    printf("thank you");
    return 0;
    }

// keep taking numbers as input from user until user enters a number which is multiple of 7