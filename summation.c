#include<stdio.h>

int main ()
{
    // Declare variables
    int num, summation = 0;

    // Input a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate the summation of the number
    for (int i = 1; i <= num; ++i) {
        summation += i;
    }

        // Display the calculated summation
    printf("summation is %d\n", summation);

    return 0;
}