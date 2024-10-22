#include<stdio.h>

float convertTemp(float celsius);                                   // function prototype

int main() {
    float far = convertTemp(0);                                     // function call
    printf("far : %f", far);
    return 0;
    }

float convertTemp(float celsius) {                                  // function definition
    float far = celsius * (9.0/5.0) + 32;
    return far;                                                     
    }



    // write a function to convert celsius to fahrenheit

    // F = (C * 0.18) + 32