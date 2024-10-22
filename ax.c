#include<stdio.h>

int main() {
       int i = 5;
    do {
        printf("%d \n", i);
        i--;
    } while(i>=1);

    return 0;
    }


    /*
    int i = 5;: Initializes the loop control variable i with the value 5.

    do { ... } while(i >= 1);: A do-while loop that executes the block of code inside the curly braces at least once,
    and then continues as long as the condition i >= 1 is true.

    i--;: Decrements the value of i by 1 in each iteration of the loop.
    while (i >= 1);: The while condition that determines whether the loop should continue.
    */