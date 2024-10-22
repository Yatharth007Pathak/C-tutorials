#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int smallest = matrix[0][0];
    int greatest = matrix[0][0];
    
    // Finding the smallest and greatest element           
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
            if(matrix[i][j] > greatest) {
                greatest = matrix[i][j];
            }
        }
    }
    
    // Output the smallest and greatest element
    printf("The smallest element in the matrix is: %d\n", smallest);
    printf("The greatest element in the matrix is: %d\n", greatest);
    
    return 0;
}


/*
The nested loop iterates through each element of the matrix. 
If an element is smaller than smallest, it updates the smallest variable, 
and if an element is greater than greatest, it updates the greatest variable
*/