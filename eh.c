#include<stdio.h>
#include<string.h>

struct student {                                                 // Define a structure named "student" with three members: name, roll, and cgpa.
    char name[100];
    int roll;
    float cgpa;
};

int main() {

    struct student ece[100];                                     // Create an array of structures named "ece" with a size of 100.

    strcpy(ece[0].name, "keshav");                               // Initialize the first element of the array with specific values.
    ece[0].roll = 133;
    ece[0].cgpa = 9.7;

    printf("student name = %s \n", ece[0].name);                 // Print the details of the student.
    printf("student roll no = %d \n", ece[0].roll);
    printf("student cgpa = %f \n", ece[0].cgpa);

    return 0;                                                    // Return 0 to indicate successful program execution.
    }

    /*
    Our C program defines a structure student and creates an array of structures named ece with a size of 100. 
    It then initializes the first element of the array with values for a student named "keshav" with roll number 133 and a CGPA of 9.7 
    Finally, it prints the details of this student.
    */