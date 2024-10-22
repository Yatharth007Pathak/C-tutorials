#include<stdio.h>

int main() {
    float price[3];                      // Declaration of a floating-point array named price with a size of 3. This array will be used to store the input prices.
    printf("enter 3 prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1 : %f \n", price[0] + (0.18*price[0]));
    printf("total price 2 : %f \n", price[1] + (0.18*price[1]));
    printf("total price 3 : %f \n", price[2] + (0.18*price[2]));
    
    return 0;
    }


    // write a program to enter price of 3 items and print their final cost with gst


    // &price[0], &price[1], and &price[2] are the addresses where the entered values will be stored


    /*
    An array is a collection of elements of the same type stored in contiguous memory locations.
    When we declare an array, we are allocating memory for a fixed-size block of elements.
    */