#include<stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d \n", i);
        i++;
    } while(i<=5);

    return 0;
    }

    // do while loop
    
    // Do-While Loop: Similar to a while loop, but the condition is checked after the block of code is executed, ensuring that the code inside the loop runs at least once.


    /*
    int i = 1;: Initializes the loop control variable i with the value 1.

    do { ... } while(i <= 5);: A do-while loop that executes the block of code inside the curly braces at least once, 
    and then continues as long as the condition i <= 5 is true.

    i++;: Increments the value of i by 1 in each iteration of the loop.
    while(i <= 5);: The while condition that determines whether the loop should continue. 
    */