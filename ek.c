#include <stdio.h>

struct student {                                            // Define a structure named 'student'
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"Yatharth", 69, 9.65};             // Create an instance of the 'student' structure and initialize it

    struct student *ptr = &s1;                              // Create a pointer to the 'student' structure and point it to the address of 's1'
 
    printf("student name = %s \n", ptr->name);              // Access and print the details of the student using the arrow operator
    printf("student roll no = %d \n", ptr->roll);
    printf("student cgpa = %f \n", ptr->cgpa);

    return 0;
}


// The arrow operator (->) is a shorthand notation for accessing structure members through a pointer.

/*
the program defines a structure student, creates an instance of that structure, initializes it, 
creates a pointer to the structure, and then prints the details of the student using the pointer and the arrow operator.
*/