#include <stdio.h>

int main() {
    // Define the number of each type of note
    int num_100 = 5;
    int num_50 = 3;
    int num_20 = 20;

    // Calculate the total amount
    int total_amount = (num_100 * 100) + (num_50 * 50) + (num_20 * 20);

    // Display the total amount
    printf("Total amount: Rs %d\n", total_amount);

    return 0;
}

// program to find total amount when there are 5 nites of Rs 100, 3 notes of Rs 50 and 20 notes of Rs 20