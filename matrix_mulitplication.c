#include <stdio.h>

void inputMatrix(int matrix[][100], int row, int col, char name) {
    printf("Enter the elements of matrix %c:\n", name);
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

void multiplyMatrices(int A[][100], int B[][100], int C[][100], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowA, colA, rowB, colB;
    
    // Input dimensions of matrix A
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &rowA, &colA);
    
    // Input dimensions of matrix B
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &rowB, &colB);
    
    if (colA != rowB) {
        printf("Matrix multiplication not possible. Number of columns in matrix A must be equal to number of rows in matrix B.\n");
        return 1;
    }
    
    int A[100][100], B[100][100], C[100][100];
    
    // Input matrices A and B
    inputMatrix(A, rowA, colA, 'A');
    inputMatrix(B, rowB, colB, 'B');
    
    // Multiply matrices A and B
    multiplyMatrices(A, B, C, rowA, colA, colB);
    
    // Print the result matrix C
    printf("Matrix A * B:\n");
    printMatrix(C, rowA, colB);
    
    return 0;
}
