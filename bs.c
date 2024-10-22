#include<stdio.h>
#include<math.h>

float SquareArea(float side);
float CircleArea(float rad);
float RectangleArea(float a, float b);

int main() {

    float a = 5.0;
    float b = 10.0;
    printf("area of rectangle is : %f \n", RectangleArea(a, b));                  // calling statement

    float rad = 6.0;
    printf("area of circle is : %f \n", CircleArea(rad));                         // calling statement

    float side = 7.0;
    printf("area of square is : %f \n", SquareArea(side));                        // calling statement

    return 0;
    }

float SquareArea(float side) {
    return side * side;
}

float CircleArea(float rad) {
    return 3.14 * rad * rad;
}

float RectangleArea(float a, float b) {
    return a * b;
}


    //write functions to calculate area of square, a circle and a rectangle