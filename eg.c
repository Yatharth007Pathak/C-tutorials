#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

int main() {

    // Declare a variable of type struct Point
    struct Point myPoint;

    // Access and assign values using dot notation
    myPoint.x = 10;
    myPoint.y = 20;

    // Display the values
    printf("X coordinate: %d\n", myPoint.x);
    printf("Y coordinate: %d\n", myPoint.y);

    return 0;
}


/*
In the context of the C programming language, "dot notation" typically refers to the use of the dot operator (.) 
to access members of a structure or a union. The dot notation is specific to structures and unions in C, 
and it allows you to work with the individual elements within these composite data types.
*/