#include<stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent {                             // Define the structure
    char name[100];
    int roll;
    float cgpa;
} ces ;

int main() {
    ces s1;                                                             // Declare a variable of type ces
    strcpy(s1.name, "Yatharth");                                        // Initialize the members of s1
    s1.roll = 69;
    s1.cgpa = 9.65;

    printf("student name = %s \n", s1.name);                            // Print the details of the student
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);


    return 0;                                                           // Return 0 to indicate successful execution
    }

    /*
    Our C program defines a structure named ComputerEngineeringStudent (typedef as ces) to represent computer engineering students. 
    It contains three members: name (an array of characters), roll (an integer), and cgpa (a floating-point number).

    In the main function, we declare a variable s1 of type ces and initialize its members with some values. 
    Then, we print out the details of the student using printf statements.
    */