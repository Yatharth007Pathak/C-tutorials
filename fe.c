#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");

    int n; 
    printf("enter n : ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d \n", i);
            
        }
    }

    fclose(fptr);

    return 0;
    }

    // write a program to write all odd numbers from 1 to n in a file


/*

Our C program takes an integer n as input, and then writes all odd numbers from 0 to n to a file named "odd.txt" using the fprintf function. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("odd.txt", "w");: Opens the file named "odd.txt" in write mode ("w"). If the file doesn't exist, it will be created. 
If it does exist, its contents will be overwritten. The file pointer (fptr) is then assigned the address of the file stream.

int n;: Declares an integer variable n to store user input.

printf("enter n : ");: Prompts the user to enter the value of n.

scanf("%d", &n);: Reads the input for n from the user.

for(int i=0; i<=n; i++) {: Starts a for loop from 0 to n.

if(i % 2 != 0) {: Checks if the current value of i is odd.

fprintf(fptr, "%d \n", i);: Writes the odd number i to the file.

fclose(fptr);: Closes the file after writing the odd numbers.

*/