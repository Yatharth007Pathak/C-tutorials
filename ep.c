#include<stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent {
    char name[100];
    int roll;
    float cgpa;
} ces ;

int main() {
    ces s1 = {"Yatharth", 69, 9.65};
    
    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);


    return 0;
    }

    /*
    Our C program defines a structure ComputerEngineeringStudent (abbreviated as ces) that represents information about a computer 
    engineering student. It includes three fields: name (for the student's name), roll (for the roll number), and cgpa (for the CGPA). 
    The program then creates an instance s1 of this structure and initializes it with specific values.
    */

    /*
    Structure definition :-This defines a structure named ComputerEngineeringStudent with three members: 
    name (an array of characters), roll (an integer), and cgpa (a floating-point number). 
    The typedef statement allows us to use ces as a shorthand for struct ComputerEngineeringStudent

    Main function :- In the main function, an instance s1 of the ComputerEngineeringStudent structure is created 
    and initialized with the values "Yatharth" for the name, 69 for the roll number, and 9.65 for the CGPA.
    The printf statements then print the information of the student, including name, roll number, and CGPA.
    */