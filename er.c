#include <stdio.h>

struct vector {                                                                            // Define a structure to represent a vector
    int x;
    int y;
    int z;
};

void CalcSum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    
    struct vector v1 = {1, 2, 3};                                                          // Example vectors
    struct vector v2 = {4, 5, 6};
    struct vector sum = {0};

    CalcSum(v1, v2, sum);

    return 0;
}

void CalcSum(struct vector v1, struct vector v2, struct vector sum) {                      // Function to calculate the sum of two vectors
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;

    printf("sum of x is : %d \n", sum.x);
    printf("sum of y is : %d \n", sum.y);
    printf("sum of z is : %d \n", sum.z);
}


/*
#include <stdio.h>: This line includes the standard input/output library, which is necessary for using functions like printf().

struct vector { int x; int y; int z; };: Defines a structure named vector that contains three integer members: x, y, and z. 
This structure represents a 3D vector with coordinates (x, y, z).

void CalcSum(struct vector v1, struct vector v2, struct vector sum);: Function prototype declaration for CalcSum. 
It specifies that CalcSum is a function that takes three parameters, all of type struct vector.

int main() {: Start of the main function.

struct vector v1 = {1, 2, 3};: Declaration and initialization of a struct vector variable named v1 with values 
1, 2, and 3 for its x, y, and z members, respectively.

struct vector v2 = {4, 5, 6};: Declaration and initialization of another struct vector variable named v2 with values 
4, 5, and 6 for its x, y, and z members, respectively.

struct vector sum = {0};: Declaration and initialization of a struct vector variable named sum with all members initialized to 0.

CalcSum(v1, v2, sum);: Function call to CalcSum with the vectors v1 and v2 as inputs, and the sum vector as an output parameter.

return 0;: Indicates successful program execution and terminates the main function.

}: End of the main function.

void CalcSum(struct vector v1, struct vector v2, struct vector sum) {: Start of the CalcSum function. 
It takes three parameters - two input vectors (v1 and v2) and one output vector (sum).

sum.x = v1.x + v2.x;: Calculates the sum of the x-components of v1 and v2 and stores the result in sum.x.
sum.y = v1.y + v2.y;: Calculates the sum of the y-components of v1 and v2 and stores the result in sum.y.
sum.z = v1.z + v2.z;: Calculates the sum of the z-components of v1 and v2 and stores the result in sum.z.

printf("sum of x is : %d \n", sum.x);: Prints the sum of x-components of v1 and v2.
printf("sum of y is : %d \n", sum.y);: Prints the sum of y-components of v1 and v2.
printf("sum of z is : %d \n", sum.z);: Prints the sum of z-components of v1 and v2.

}: End of the CalcSum function.
*/