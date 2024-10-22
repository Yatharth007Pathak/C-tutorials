#include<stdio.h>

void printHW(int count);                                       // function prototype

int main() {
    
    printHW(5);                                                // function call

    return 0;
    }

void printHW(int count) {                                      // function definition
    if (count == 0) {
        return;                                                // Base case: when count is 0, stop recursion
    }
    printf("Hello World \n");
    printHW(count-1);                                          // recursive function with count decremented
}



    // recursion
    // when a function calls itself, it is called recursion

    // print "Hello World" 5 times


    /*
    C code defines a simple recursive function printHW that prints "Hello World" a specified number of times.
    and then calls itself recursively with count - 1 until count becomes 0, at which point the recursion stops.
    The program, in this case, will print "Hello World" five times due to the initial call in the main function with printHW(5).
    */