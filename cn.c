#include<stdio.h>

int main() {
    
    int marks[3];                 // Declares an integer array named marks with a size of 3. It will be used to store the marks for three subjects: physics, chemistry, and math.

    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter chem : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);         

    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
    
        return 0;
    }

    // Arrays - collection of similar data types stored at contiguous memory locations


    /*
    syntax of arrays-             int marks[]             char name[]             float price[]
    inside square bracket is a number' which is the size of location

    input and output using arrays-          scanf("%d", &marks[]);               printf("%d", marks[]);
    number inside square bracket denotes memory location inside the array
    */


   // &marks[0], &marks[1], and &marks[2] are the addresses where the entered integer values will be stored.

   /*
   array is a pointer
   int *ptr = &arr[0]; is same as int *ptr = arr; 
   */