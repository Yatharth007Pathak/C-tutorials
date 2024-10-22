#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=n; i>=1; i--) {
        printf("%d \n", i);
        sum = sum + i;
    }

printf("sum is %d \n", sum);

    return 0;
    }


    //print n natural numbers in reverse and also print the sum of first n natural numbers in reverse