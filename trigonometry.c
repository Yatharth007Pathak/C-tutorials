#include <stdio.h>
#include <math.h>

int main() {
    double angle, result, result_, result__;              // Declare variables to store the angle in degrees and the results of trigonometric functions
    
    printf("Enter the angle in degrees: ");               // Prompt the user to input the angle in degrees
    scanf("%lf", &angle);                                 // Read the input angle from the user and store it in the 'angle' variable

    angle = angle * M_PI / 180.0;                         // Convert the angle from degrees to radians using the M_PI constant from the math.h library

    result = sin(angle);                                                                   // Calculate the sine of the angle
    result_ = cos(angle);                                                                  // Calculate the cosine of the angle
    result__ = tan(angle);                                                                 // Calculate the tangent of the angle    

    printf("The sine of %lf degrees is: %lf\n", angle * 180.0 / M_PI, result);             // Display the result
    printf("The cosine of %lf degrees is: %lf\n", angle * 180.0 / M_PI, result_);
    printf("The tangent of %lf degrees is: %lf\n", angle * 180.0 / M_PI, result__);

    return 0;                                             // indicate successful completion of the program
}

/*
this program takes an angle in degrees as input from the user, converts it to radians, 
and then calculates and prints the sine, cosine, and tangent of the angle in both radians and degrees. 
The mathematical functions (sin, cos, tan) and the constant M_PI are from the math.h library. 
The results are displayed using printf.
*/