#include<stdio.h>
#include<math.h>

int main() {
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = pow(b,c);
    printf("%d", power);    
    return 0;
    }


/*
In the C programming language, <math.h> is a header file that provides declarations for various mathematical functions. 
These functions cover a wide range of mathematical operations, such as basic arithmetic, trigonometry, logarithms, exponentiation, and more. 
Including <math.h> at the beginning of your C program allows you to use these mathematical functions in your code.

Here are some common mathematical functions provided by <math.h>:

Basic Arithmetic:
int abs(int x): Returns the absolute value of an integer.
double fabs(double x): Returns the absolute value of a floating-point number.

Trigonometric Functions:
double sin(double x), double cos(double x), double tan(double x): Sine, cosine, and tangent functions, respectively.
double asin(double x), double acos(double x), double atan(double x): Inverse sine, inverse cosine, and inverse tangent functions, respectively.

Exponential and Logarithmic Functions:
double exp(double x): Calculates the exponential function of x (e^x).
double log(double x): Natural logarithm of x.
double log10(double x): Base-10 logarithm of x.

Power Functions:
double pow(double x, double y): Raises x to the power of y.
double sqrt(double x): Calculates the square root of x.

Rounding Functions:
double ceil(double x): Rounds x up to the nearest integer.
double floor(double x): Rounds x down to the nearest integer.
double round(double x): Rounds x to the nearest integer.
    */