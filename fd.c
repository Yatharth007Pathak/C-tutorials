#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test8.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name : %s \n", name);
    fprintf(fptr, "student age : %d \n", age);
    fprintf(fptr, "student cgpa : %f \n", cgpa);

    fclose(fptr);    

    return 0;
    }


    // make a program  to input student information from a user and enter it to a file


/*
Our C program is designed to take input for a student's name, age, and CGPA, and then write this information to a 
file named "test8.txt" using the fprintf function. Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

int main() {: This line marks the beginning of the main function.

FILE *fptr;: Declares a pointer to a FILE structure, which will be used to handle the file.

fptr = fopen("test8.txt", "w");: Opens the file named "test8.txt" in write mode ("w"). If the file doesn't exist, it will be created. 
If it does exist, its contents will be overwritten. The file pointer (fptr) is then assigned the address of the file stream.

char name[100];: Declares an array name to store the student's name, with a maximum length of 100 characters.

int age;: Declares an integer variable age to store the student's age.

float cgpa;: Declares a float variable cgpa to store the student's CGPA.

printf("enter name : ");: Prompts the user to enter the student's name.

scanf("%s", name);: Reads the input for the student's name from the user.

printf("enter age : ");: Prompts the user to enter the student's age.

scanf("%d", &age);: Reads the input for the student's age from the user.

printf("enter cgpa : ");: Prompts the user to enter the student's CGPA.

scanf("%f", &cgpa);: Reads the input for the student's CGPA from the user.

fprintf(fptr, "student name : %s \n", name);: Writes the student's name to the file.

fprintf(fptr, "student age : %d \n", age);: Writes the student's age to the file.

fprintf(fptr, "student cgpa : %f \n", cgpa);: Writes the student's CGPA to the file.

fclose(fptr);: Closes the file after writing the information.

return 0;: Indicates the successful execution of the program.
*/
