#include <stdio.h>

int main () {
    int arr[] = {1, 2, 3, 4, 5}; 
    printf("%d\n", *(arr));
    printf("%d\n", *(arr+1));
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+3));
    printf("%d\n", *(arr+4));
    printf("%d\n", *(arr+5));
    printf("%d\n", *(arr+6));

    return 0;
    }

    // note that accessing arr+5 and arr+6 may result in undefined behavior since the array arr has only five elements (indices 0 to 4).




/*
Output Explanation:
printf("%d\n", *(arr));: Prints the value at arr[0], which is 1.
printf("%d\n", *(arr + 1));: Prints the value at arr[1], which is 2.
printf("%d\n", *(arr + 2));: Prints the value at arr[2], which is 3.
printf("%d\n", *(arr + 3));: Prints the value at arr[3], which is 4.
printf("%d\n", *(arr + 4));: Prints the value at arr[4], which is 5.
printf("%d\n", *(arr + 5));: Accessing beyond the array (arr[5]) is undefined behavior.
printf("%d\n", *(arr + 6));: Accessing beyond the array (arr[6]) is undefined behavior.

Undefined behavior means that the program's behavior is not defined by the C standard, and it might produce unexpected results or crash.

If we want to safely access elements in the array, ensure that the indices used in pointer arithmetic are within the bounds of the array.
*/

