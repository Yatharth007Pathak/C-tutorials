#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a+b);

    fclose(fptr);

    return 0;
    }

    // two numbers -a and b are written in a file. write a program to replace them with their sum

/*
Our C program appears to perform the following operations:

Open the file named "sum.txt" in read mode ("r").
Read two integers (a and b) from the file using fscanf.
Close the file.
Open the same file ("sum.txt") in write mode ("w").
Write the sum of a and b to the file using fprintf.
Close the file.
Return 0 to indicate successful execution.

This program assumes that the file "sum.txt" already exists and contains two integers separated by whitespace. 
The program reads these two integers, calculates their sum, and then overwrites the file with the result.
*/