#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which number is greater
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
    } else {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}
