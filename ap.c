#include<stdio.h>

int main() {
    int i=1;
    printf("%d \n", i++);                 // Prints 1, then increments i
    printf("%d \n", i);                   // Prints the incremented value of i (2)
    printf("%d \n", i);                   // Prints the same value as the previous line (2)


    printf("hi \n");

int j=1;
    printf("%d \n", ++j);                 // Increments j and prints the incremented value (2)
    printf("%d \n", j);                   // Prints the incremented value of j (2)
    printf("%d \n", j);                   // Prints the same value as the previous line (2)

    return 0;
    }

    // increment operator
    // i++ use the constant and then increase it       i++ is post increment operator
    // ++i increase the constant and then use it       ++i is pre increment operator