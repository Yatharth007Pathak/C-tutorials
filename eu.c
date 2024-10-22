#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if(fptr == NULL) {
        printf("file doesn't exist \n");
    } else {
        fclose(fptr);
    }

    return 0;
    }


    // opening a file      fptr = fopen("filename", mode);
    // closing a file      fclose(fptr);

    /*
    file opening modes
    "r"    open to read
    "rb"   open to read in binary
    "w"    open to write
    "wb"   open to wite in binary
    "a"    open to append
    */


/*
Your C program checks whether a file named "NewTest.txt" exists. 
If the file does not exist, it prints a message indicating that the file doesn't exist. Otherwise, it closes the file.
*/