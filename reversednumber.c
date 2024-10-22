#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while(num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}


/*
let's break down the provided C code step by step:

#include <stdio.h>: This line includes the standard input/output library, which is necessary for using functions like printf() and scanf().

int main() {: This line signifies the start of the main() function, which is the entry point of the program.

int num, reversedNum = 0, remainder;: Here, three integer variables are declared: num, reversedNum, and remainder. 
num will store the original number entered by the user, reversedNum will store the reversed number, 
and remainder will store the remainder when num is divided by 10.

printf("Enter an integer: ");: This line prints a message asking the user to enter an integer.

scanf("%d", &num);: This line reads an integer input from the user and stores it in the variable num.

while(num != 0) {: This line starts a while loop that continues until num becomes zero. Inside this loop, the program will reverse the number.

remainder = num % 10;: This line calculates the remainder when num is divided by 10, which is the last digit of the number.

reversedNum = reversedNum * 10 + remainder;: This line adds the last digit (remainder) to reversedNum after 
shifting reversedNum one place to the left. This effectively builds the reversed number digit by digit.

num /= 10;: This line updates the value of num by removing its last digit through integer division by 10. 
This operation effectively moves to the next digit of the original number.
The loop continues until num becomes zero, at which point the original number has been fully reversed.
printf("Reversed number: %d\n", reversedNum);:
*/