#include <stdio.h>

void inputMatrix(int matrix[][100], int row, int col) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int firstMatrix[][100], int secondMatrix[][100], int resultMatrix[][100], int rowFirst, int colFirst, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;
    
    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    
    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    
    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }
    
    int firstMatrix[100][100], secondMatrix[100][100], resultMatrix[100][100];
    
    // Input the first matrix
    inputMatrix(firstMatrix, rowFirst, colFirst);
    
    // Input the second matrix
    inputMatrix(secondMatrix, rowSecond, colSecond);
    
    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, colSecond);
    
    // Print the result matrix
    printf("Resultant matrix:\n");
    printMatrix(resultMatrix, rowFirst, colSecond);
    
    return 0;
}
