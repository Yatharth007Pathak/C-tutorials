#include<stdio.h>                                                   // Includes the standard input-output library

void printString(char arr[]);                                       // Function declaration that takes a character array as an argument. 

int main() {

    char firstName[]= "YATHARTH";                                   // Define two character arrays
    char lastName[]= "PATHAK";
    
    printString(firstName);                                         // Call the printString function for the first name
    printString(lastName);                                          // Call the printString function for the last name

    return 0;                                                       // Return 0 to indicate successful execution
    }

    void printString(char arr[]) {                                  // Function definition

        for(int i=0; arr[i] != '\0' ; i++) {                        // Iterate through the characters until the null character is encountered
            printf("%c", arr[i]);                                   // Print each character
        }
        printf("\n");                                               // Print a new line after printing the characters
    }
    
    // create a string firstNane and lastName to store details of user and print all characters using a loop


    /*
    Main Function:
    we define the main function, which is the entry point of our program.
    Two character arrays, firstName and lastName, are declared and initialized with strings.
    The printString function is called twice, once for each name.
    Finally, the program returns 0 to indicate successful execution.
    */

    /*
    PrintString Function:
    This function takes a character array (arr) as a parameter.
    It uses a for loop to iterate through the characters of the array until the null character ('\0') is encountered.
    Inside the loop, each character is printed using printf.
    After printing all characters, a newline (\n) is printed to move to the next line.
    */