#include <stdio.h>

struct complex {                                                                       // Define a structure for complex numbers
    int real;
    int imag;
};

int main() {
  
    struct complex num1 = {2, 3};                                                  // Declare and initialize complex number
    struct complex *ptr = &num1;
    printf("real part = %d \n", ptr->real);
    printf("imag part = %d \n", ptr->imag);
        
    return 0;
}


    // create a structure to store complex numbers (use arrow operator)

/*
 Let's go through each line of the code pointwise:

#include <stdio.h>
This line includes the standard input-output header file, which is necessary for using functions like printf and scanf.

struct complex { int real; int imag; };
This line defines a structure named complex with two members: real and imag. 
This structure is designed to represent complex numbers, where real is the real part, and imag is the imaginary part.

int main() {
This line begins the main function, which is the entry point of the program.

struct complex num1 = {2, 3};
Declares an instance of the complex structure named num1 and initializes it with the values 2 for the real part and 3 for the imaginary part.
This represents the complex number 2 + 3i.

struct complex *ptr = &num1;
Declares a pointer ptr to a structure of type complex and initializes it with the address of the num1 structure.

printf("real part = %d \n", ptr->real);
Prints the real part of the complex number using the printf function. 
The %d is a format specifier for an integer, and ptr->real accesses the real part of the complex number through the pointer ptr.

printf("imag part = %d \n", ptr->imag);
Prints the imaginary part of the complex number using the printf function. 
Similar to the previous line, %d is used as the format specifier, and ptr->imag accesses the imaginary part through the pointer ptr.

return 0;
Indicates the end of the main function and returns an integer value 0 to the operating system, indicating successful program execution.

}
Closes the main function and marks the end of the program.
In summary, the code declares a structure for complex numbers, initializes a complex number, uses a pointer to access and print its real and imaginary parts. The output of this program would be:
*/    