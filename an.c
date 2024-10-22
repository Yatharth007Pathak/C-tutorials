#include<stdio.h>

int main() {
    for(int i=1; i<=100; i=i+1) {
        printf("%d \n", i);
    }
    return 0;
    }
    
    // i=i+1 is same as i+=1 and i++             i=i+2 is same as i+=2


    /*
    for (int i = 1; i <= 100; i = i + 1): A for loop that initializes a loop control variable i to 1,
    continues as long as i is less than or equal to 100, and increments i by 1 in each iteration.

     printf("%d \n", i);: Inside the loop, this line prints the value of i followed by a newline character. 
     The %d is a format specifier for an integer.

     The loop will run 100 times, printing the numbers from 1 to 100, each on a new line.
    */