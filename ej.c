#include<stdio.h>

struct student {                                             // Define a structure named 'student'
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"Yatharth", 69, 9.65};              // Create an instance of the 'student' structure and initialize it

    struct student *ptr = &s1;                               // Create a pointer to the 'student' structure and point it to the address of 's1'

    printf("student name = %s \n", (*ptr).name);             // Access and print the details of the student using the pointer
    printf("student roll no = %d \n", (*ptr).roll);
    printf("student cgpa = %f \n", (*ptr).cgpa);

    return 0;
    }

    /*
    Our C code defines a structure student that represents information about a student, including their name, roll number, and cgpa.
    We then create an instance of this structure (s1) and a pointer to the structure (ptr) that points to the address of s1. 
    Finally, we print the details of the student using the pointer.
    */