#include<stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"Yatharth", 69, 9.65};

    struct student *ptr = &s1;

    printf("student.name with ptr = %s \n", (*ptr).name);
    printf("student->name with ptr= %s \n", ptr->name);

    return 0;
    }

/*
Our C code defines a structure student that represents information about a student, including their name, roll number, and cgpa.
In the main function, we create an instance of this structure (s1) and then create a pointer (ptr) to that instance.
We then demonstrate two ways of accessing the name member of the student structure using the pointer:
(*ptr).name: This is the traditional way of dereferencing a pointer and accessing a member of a structure.
ptr->name: This is a shorthand notation that achieves the same result as (*ptr).name. It is commonly used in C to make the code more concise.
Our printf statements print the name of the student using both of these methods. The output is same for both lines.
These lines demonstrate two equivalent ways of accessing the name member of the student structure through a pointer.
*/