#include <stdio.h>

int main() {
    int size, i, j;
    
    // Prompt user to enter the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    
    int matrix[size][size];
    
    // Prompt user to enter the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the matrix
    printf("The entered square matrix is:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
