#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    
    // Input the two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Pointers pointing to the addresses of num1 and num2
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Adding the numbers using pointers
    sum = *ptr1 + *ptr2;
    
    // Output the sum
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
    
    return 0;
}


// C code to add two numbers using pointers


/*
In this code:

We declare two integers num1 and num2 to store the two numbers entered by the user.
We declare two integer pointers ptr1 and ptr2.
We take input for num1 and num2 from the user.
We make ptr1 point to the address of num1 and ptr2 point to the address of num2.
We dereference the pointers to access the values stored at those addresses and add them to get the sum.
Finally, we output the sum.
*/