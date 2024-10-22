#include<stdio.h>

int main() {
    int sum = 0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;
    }

    printf("sum is %d", sum);
    return 0;
    }

    // calculate the sum of all numbers between 5 and 50, (including 5 and 50)