#include<stdio.h>
#include<string.h>

struct student {                                                // Define a structure named 'student' to store information about a student
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);                              // Function prototype to print information about a student

int main() {                                                    // Main function

    struct student s1 = {"Yatharth", 69, 9.65};                 // Create an instance of the 'student' structure and initialize it with values

    printInfo(s1);                                              // Call the printInfo function to display information about the student

    return 0;                                                   // Return 0 to indicate successful completion of the program
    }

    void printInfo(struct student s1) {                         // Function definition to print information about a student
   
        printf("student information : \n");                     // Display information about the student using printf statements
        printf("student name = %s \n", s1.name);
        printf("student roll no = %d \n", s1.roll);
        printf("student cgpa = %f \n", s1.cgpa);
    }

    /*
    This program defines a structure student that contains three members: name (character array), roll (integer), and cgpa (float). 
    In the main function, an instance of this structure is created and initialized with values. 
    The printInfo function is then called to display the information about the student using printf statements. 
    Finally, the program returns 0 to indicate successful completion.
    */