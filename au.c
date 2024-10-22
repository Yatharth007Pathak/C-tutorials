#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int i=0;
    while ((i<=n)) {
        printf("%d \n", i);
        i++;
    }

    return 0;
    }


// print the numbers from 0 to n, if n is given by user


/*
int i = 0;: Initializes the loop control variable i with the value 0.
while (i <= n): A while loop that continues as long as the condition i <= n is true.
i++;: Increments the value of i by 1 in each iteration of the loop.
*/