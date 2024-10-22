#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

/*
This program first prompts the user to input a temperature in Celsius. It reads this input into the variable celsius. 
Then, it converts this temperature to Fahrenheit using the formula (Celsius * 9/5) + 32, and stores the result in the variable fahrenheit. 
Finally, it prints out the original temperature in Celsius and the converted temperature in Fahrenheit.
*/