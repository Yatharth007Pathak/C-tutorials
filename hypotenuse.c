#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, hypotenuse;

    // Input the lengths of the two sides of the right triangle
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    // Calculate the hypotenuse using the Pythagorean theorem: c = sqrt(a^2 + b^2)
    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    // Display the calculated hypotenuse
    printf("The hypotenuse of the right triangle is: %f\n", hypotenuse);

    return 0;
}


/*
The line hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2)); calculates the hypotenuse of a right-angled triangle
using the Pythagorean theorem. Let me break it down for you:

pow(side1, 2): This calculates the square of side1.
pow(side2, 2): This calculates the square of side2.
pow(side1, 2) + pow(side2, 2): This computes the sum of the squares of side1 and side2, which is equivalent
to the sum of the squares of the two shorter sides of a right-angled triangle.
sqrt(pow(side1, 2) + pow(side2, 2)): This takes the square root of the sum of the squares, giving the length of the hypotenuse.
*/