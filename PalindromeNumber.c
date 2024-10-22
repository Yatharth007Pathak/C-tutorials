#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reversing the number
    while(num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Checking if the original number is equal to its reverse
    if(originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}


/*
The code begins with the inclusion of the standard input-output library stdio.h.
The main() function is defined, which is the entry point of the program.
Inside main(), the following variables are declared:
num: an integer variable to store the number entered by the user.
reversedNum: an integer variable initialized to 0, which will store the reversed form of num.
originalNum: an integer variable to store the original value of num.
remainder: an integer variable to store the remainder obtained during the process of reversing num.
The printf() function prompts the user to enter a number.
The scanf() function reads an integer from the user and stores it in the num variable.
The value of num is stored in originalNum to retain the original value for comparison later.
The program enters a while loop that continues until num becomes 0:
Inside the loop, the remainder of num when divided by 10 is calculated and stored in the remainder variable.
reversedNum is updated by multiplying its current value by 10 and adding the remainder.
num is then updated by dividing it by 10, effectively removing the last digit.
Once the loop finishes, reversedNum contains the reverse of the original number.
The program then checks if the original number (originalNum) is equal to its reverse (reversedNum):
If they are equal, it prints a message indicating that the number is a palindrome.
If they are not equal, it prints a message indicating that the number is not a palindrome.
Finally, the program returns 0 to indicate successful execution.
*/



/*
let's break down the code execution when the user enters the number 45.

The user is prompted to enter a number: "Enter a number: ".
The user inputs 45.
The value of num is set to 45, and originalNum is also set to 45.
The while loop begins its execution since num is not equal to 0.

In the first iteration:
remainder is set to the remainder of num divided by 10, which is 5.
reversedNum is updated to (0 * 10) + 5, which is 5.
num is updated to num / 10, which is 4 (integer division).

In the second iteration:
remainder is set to the remainder of num divided by 10, which is 4.
reversedNum is updated to (5 * 10) + 4, which is 54.
num is updated to num / 10, which is 0 (integer division).

The condition of the while loop (num != 0) is no longer true, so the loop exits.
The program checks if the original number (45) is equal to its reverse (54):
Since they are not equal, the program prints: "45 is not a palindrome."
The program ends, returning 0.
So, for the input 45, the program determines that it is not a palindrome.
*/

/*
Let's break down the code execution step by step when the number 55 is entered:
The program prompts the user to enter a number.
The user inputs 55.
The value of num is set to 55, and originalNum is also set to 55.
The program enters the while loop because num is not equal to 0.
Inside the loop:
The remainder of num when divided by 10 is 5 (remainder = num % 10).
reversedNum becomes 0 * 10 + 5 = 5.
num becomes 55 / 10 = 5 (integer division, so the decimal part is truncated).
The loop iterates again because num is still not equal to 0.
Inside the loop:
The remainder of num when divided by 10 is 5 (remainder = num % 10).
reversedNum becomes 5 * 10 + 5 = 55.
num becomes 5 / 10 = 0.
The loop exits because num becomes 0.
The program checks if originalNum (55) is equal to reversedNum (55).
Since they are equal, the program prints: "55 is a palindrome."
The program returns 0 to indicate successful execution.
So, the output when entering the number 55 will be:
*/