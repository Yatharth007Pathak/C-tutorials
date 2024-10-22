#include<stdio.h>

void calculatePrice(float value);                           // function prototype

int main() {
    float value = 100.0;
    calculatePrice(value);                                  // function call
    printf("vallue is : %f \n", value);
    return 0;
    }

    void calculatePrice(float value) {                      // function definition
        value = value + (0.18 * value);
        printf("final price is : %f \n", value);
    }


    // function can only return one value at a time
    // changes to parameters in function don't change the values of argument in calling function. because a copy of argument is passed to the function