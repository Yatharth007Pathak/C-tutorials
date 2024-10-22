#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {

    struct student s1;                       
    strcpy(s1.name, "Ranchodas");
    s1.roll = 108;
    s1.cgpa = 10.0;

    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    
    struct student s2;                       
    strcpy(s2.name, "Chatur");
    s2.roll = 69;
    s2.cgpa = 9.8;

    printf("student name = %s \n", s2.name);
    printf("student roll no = %d \n", s2.roll);
    printf("student cgpa = %f \n", s2.cgpa);

    
    struct student s3;                       
    strcpy(s3.name, "Farhan");
    s3.roll = 53;
    s3.cgpa = 7.2;

    printf("student name = %s \n", s3.name);
    printf("student roll no = %d \n", s3.roll);
    printf("student cgpa = %f \n", s3.cgpa);

    return 0;
    }

    // program to store the data of 3 students


/*
In the C programming language, structures are used to group together variables of different data types under a single name. 
Here are some benefits of using structures in C:

Grouping Related Data:
Structures allow us to group together variables of different data types that are related to a particular entity or concept. 
For example, we can use a structure to represent a person with attributes like name, age, and address.

Code Organization:
Structures help in organizing code by providing a way to encapsulate related data into a single unit. 
This makes the code more readable and maintainable, especially when dealing with complex data.

Modularity:
Structures contribute to modular programming by encapsulating related data and operations on that data within a single unit. 
This modular approach enhances code reusability and makes it easier to understand and modify specific parts of a program.

Memory Efficiency:
Structures help in optimizing memory usage by grouping related data together. 
This can lead to better memory utilization compared to having individual, unrelated variables scattered throughout the code.

Passing Structures to Functions:
Functions in C can take structures as arguments, allowing us to pass a collection of related data to a function in a single parameter. 
This simplifies function calls and makes the code more elegant.

User-Defined Data Types:
Structures enable the creation of user-defined data types, allowing us to define our own data structures 
that suit the requirements of our program. This flexibility is crucial for building custom data representations.

Ease of Access:
Members of a structure can be accessed using dot notation, making it easy to work with individual elements of the structure. 
This enhances code readability and reduces the likelihood of errors.

Enhanced Readability:
By using structures, we can enhance the readability of your code, especially when dealing with complex data structures. 
The code becomes more self-explanatory as the structure defines the relationships between different pieces of data.

Arrays of Structures:
We can create arrays of structures, allowing us to efficiently manage and manipulate multiple instances of related data. 
This is useful in scenarios where we need to handle a collection of similar entities.

File I/O:
Structures are often used in file I/O operations where we need to read or write blocks of data to or from a file. 
The structure's layout in memory allows for easy serialization and deserialization of data.

In summary, structures in C provide a powerful mechanism for organizing, managing, and manipulating related data, 
contributing to code modularity, readability, and efficiency.
*/