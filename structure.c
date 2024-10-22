#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {

    struct student s1;                       // Structure Initialization: This line declares an instance of the student structure named s1.
    // s1.name = "Yatharth";  (is incorrect  way to declare name of student)
    strcpy(s1.name, "Yatharth");
    s1.roll = 69;
    s1.cgpa = 9.65;

    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    return 0;
    }


    // Structures:- A collection of values of different datatypes

    /*
    Our C program defines a structure named student and creates an instance of it named s1. 
    The structure has three members: name (an array of characters), roll (an integer), and cgpa (a float).
    We have correctly used the strcpy function to copy the string "Yatharth" into the name member of the s1 structure. 
    Note that direct assignment (s1.name = "Yatharth";) is not allowed for character arrays; 
    we need to use a function like strcpy to copy strings.
    Oour program then assigns values to the roll and cgpa members of the structure.
    Finally, we print the values of the structure members using printf.
    */

    /*
    Note:-
    To assign a string to the name field of the structure student using the assignment statement s1.name = "Yatharth"; is incorrect
    Instead, we need to use the strcpy function from the string.h library to copy the string into the name array.
    The strcpy function is used to copy the string "Yatharth" into the name array of the struct student
    */

    // Structures are stored in contiguous memory location

    /*
    Types of datatypes :-
    Inbuilt datatypes :- Integer, Float, Character, Array
    User defined datatypes :- Structure
    */