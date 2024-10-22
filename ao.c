#include<stdio.h>

int main() {
    for(int i=10; i>=0; i=i-1) {
        printf("%d \n", i);
    }
    return 0;
    }

    // i is known as iterator or counter variable



    /*
    for (int i = 10; i >= 0; i = i - 1): A for loop that initializes a loop control variable i to 10,
    continues as long as i is greater than or equal to 0, and decrements i by 1 in each iteration.

    printf("%d \n", i);: Inside the loop, this line prints the value of i followed by a newline character.
    The %d is a format specifier for an integer.

    The loop will run 11 times (from 10 down to 0), printing the numbers in descending order, each on a new line.    
    */