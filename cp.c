#include<stdio.h>

int main() {
    float price[3] = {100.00, 200.00, 300.00};

    printf("total price 1 : %f \n", price[0] + (0.18*price[0]));
    printf("total price 2 : %f \n", price[1] + (0.18*price[1]));
    printf("total price 3 : %f \n", price[2] + (0.18*price[2]));
        
    return 0;
    }


/*
float price[3] = {100.00, 200.00, 300.00};  Declaration and initialization of a floating-point array named price with a size of 3.
The values 100.00, 200.00, and 300.00 are assigned to price[0], price[1], and price[2] respectively.
*/