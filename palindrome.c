#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, j, length;
    int isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    for(i = 0, j = length - 1; i < length / 2; i++, j--) {
        if(word[i] != word[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}


/*
This C program checks whether a given word is a palindrome or not. A palindrome is a word that reads the same backward as forward. 
Here's how the program works:

The program includes the standard input-output header file stdio.h for input/output operations 
and the string manipulation header file string.h.

In the main() function:
It declares variables: word to store the input word, i and j for looping through the characters of the word, 
length to store the length of the word, and isPalindrome to keep track of whether the word is a palindrome or not.
It prompts the user to enter a word using printf().
It reads the input word from the user using scanf() and stores it in the character array word.
It calculates the length of the word using the strlen() function from string.h.
It initiates a loop to check whether the word is a palindrome:
The loop runs from the start of the word (i = 0) to the middle of the word (i < length / 2).
Inside the loop, it compares the characters at positions i and j, where j starts from the end of the word (j = length - 1 - i).
If any pair of characters at symmetric positions are not equal, it sets isPalindrome to 0 and breaks out of the loop.
After the loop, it checks the value of isPalindrome.
If isPalindrome is 1, it prints that the word is a palindrome using printf().
Otherwise, it prints that the word is not a palindrome.

Finally, the main() function returns 0, indicating successful execution.
This program efficiently checks whether the given word is a palindrome using a loop that runs only up to the middle of the word,
 making it suitable for both short and long words.
*/


// some examples of palindrome words: radar, level, deified, civic, madam, refer, noon, racecar, rotor, tenet, stats, rotator