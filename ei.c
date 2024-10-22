#include<stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"Yatharth", 69, 9.65};

    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    return 0;
    }

/*
Our C code defines a structure named "student" that contains 3 members: "name" (array of characters), "roll" (integer), and "cgpa" (float). 
We then declare a variable s1 of type struct student and initialize it with values "Yatharth" for name, 69 for roll, and 9.65 for cgpa.
Finally, we print the values of the structure members using printf statements.
*/