#include <stdio.h>

int main() {
    // Declaration and initialization of a 2x2x3 integer array
    int cube3D[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Accessing and printing elements of the 3D array
    printf("cube3D[0][0][0]: %d\n", cube3D[0][0][0]);
    printf("cube3D[0][1][2]: %d\n", cube3D[0][1][2]);
    printf("cube3D[1][0][1]: %d\n", cube3D[1][0][1]);
    printf("cube3D[1][1][2]: %d\n", cube3D[1][1][2]);

    return 0;
    }


// example of 3D array