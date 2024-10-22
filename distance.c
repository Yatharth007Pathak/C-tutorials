#include <stdio.h>
#include <math.h>

// Function to calculate distance between two points
float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    float x1, y1, x2, y2;

    // Prompt the user to enter the coordinates of the first point
    printf("Enter coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    // Prompt the user to enter the coordinates of the second point
    printf("Enter coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate distance between the two points
    float dist = distance(x1, y1, x2, y2);

    // Display the result
    printf("Distance between the two points: %.2f\n", dist);

    return 0;
}


/*
In this program:

We have a function distance that takes the coordinates of two points (x1, y1) and (x2, y2) as parameters 
and returns the distance between them using the distance formula from coordinate geometry.

In the main() function:
We prompt the user to enter the coordinates of the first point (x1, y1).
We prompt the user to enter the coordinates of the second point (x2, y2).
We calculate the distance between the two points using the distance function.
We display the calculated distance between the two points.
The program uses math.h library for sqrt and pow functions to calculate the square root and power, respectively.
*/