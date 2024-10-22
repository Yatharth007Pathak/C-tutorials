#include <stdio.h>

struct Address {
    int houseNo;
    char block[50];
    char city[50];
    char state[50];
};

int main() {

    struct Address adds[3];                                         // Declare an array of structures to store address details for 3 people

    for (int i = 0; i < 3; ++i) {                                     // Input address details for 3 people

        printf("Enter details for person %d:\n", i + 1);

        printf("House No: ");
        scanf("%d", &adds[i].houseNo);

        printf("Block: ");
        scanf("%s", adds[i].block);

        printf("City: ");
        scanf("%s", adds[i].city);

        printf("State: ");
        scanf("%s", adds[i].state);

        printf("\n");
    }

    printf("\nEntered Address Details:\n");                           // Display the entered address details

    for (int i = 0; i < 3; ++i) {
        printf("Person %d:\n", i + 1);
        printf("Address is : %d, %s, %s, %s", adds[i].houseNo, adds[i].block, adds[i].city, adds[i].state);
        printf("\n");
    }

    return 0;
}


/*
This C program is designed to collect and display address details for three people using a structure called Address. 
Let's break down the provided C code step by step:

The code begins with including the standard input/output header file (stdio.h).

A structure Address is defined, which represents the details of an address. 
It includes fields for house number (houseNo) and character arrays for block, city, and state, each with a size of 50 characters.

The main function is defined, and within it, an array of three Address structures named adds is declared. 
This array will store the address details for three people.

A for loop is used to iterate three times, allowing the user to input address details for each person. 
The details include house number, block, city, and state. The input values are stored in the respective fields of the adds array.

After collecting the address details, a second for loop is used to display the entered address details for each person. 
The information is printed using printf statements.

Overall, the program allows the user to input address details for three people and then displays the entered information.
*/