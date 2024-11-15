#include <stdio.h>

// Structure to represent a sparse matrix element
struct Element {
    int row;
    int col;
    int value;
};

int main() {
    int rowCount, colCount, i, j, nonZeroCount = 0;
    
    // Prompt user to enter the number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rowCount, &colCount);
    
    int matrix[rowCount][colCount];
    
    // Prompt user to enter the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < colCount; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    
    struct Element sparseMatrix[nonZeroCount];
    int k = 0;
    
    // Store non-zero elements in the sparse matrix
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < colCount; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix[k].row = i;
                sparseMatrix[k].col = j;
                sparseMatrix[k].value = matrix[i][j];
                k++;
            }
        }
    }
    
    // Display the sparse matrix
    printf("Sparse matrix representation (row, column, value):\n");
    for (i = 0; i < nonZeroCount; i++) {
        printf("%d %d %d\n", sparseMatrix[i].row, sparseMatrix[i].col, sparseMatrix[i].value);
    }
    
    return 0;
}
