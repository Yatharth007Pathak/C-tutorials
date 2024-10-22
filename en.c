#include <stdio.h>

typedef int myInt;                                         // Using typedef to create a new name for int

int main() {
    myInt x = 5;                                           // 'myInt' is now equivalent to 'int'
    
    printf("Value of x: %d\n", x);

    return 0;
}

    // typedef keyword :- used to create alias for data types

    /*
    In C programming, the typedef keyword is used to create new data type names. 
    It allows us to define a new name for an existing data type, making our code more readable and providing a level of abstraction. 
    
    The general syntax for typedef is:
    typedef existing_data_type new_data_type;
    */

   /*
   In above example, myInt is defined as a new name for the existing data type int. 
   After the typedef, we can use myInt as if it were a regular data type.
   */

/*
Our C program is a simple example that demonstrates the use of typedef in C to create a new name (myInt) for the int data type. 
Here's a brief explanation of your code:

#include <stdio.h>: This line includes the standard input-output library for functions like printf.
typedef int myInt;: This line creates a new name (myInt) for the int data type using the typedef keyword. 
After this line, myInt can be used as a synonym for int in our program.
int main() {: The starting point of our program. The main function is where the execution of the program begins.
myInt x = 5;: Here, we declare a variable x of type myInt and initialize it with the value 5. 
Since myInt is defined as int, this is equivalent to declaring int x = 5;.
printf("Value of x: %d\n", x);: This line prints the value of the variable x using the printf function. 
The %d is a format specifier for an integer.
return 0;: Indicates that the program executed successfully and returns an exit status of 0 to the operating system.
*/