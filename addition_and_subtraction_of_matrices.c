#include <stdio.h>

void inputMatrix(int matrix[][100], int row, int col, char name) {
    printf("Enter the elements of matrix %c:\n", name);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][100], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[][100], int B[][100], int C[][100], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][100], int B[][100], int D[][100], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            D[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int row, col;
    
    // Prompt user to enter the size of the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &row, &col);
    
    int A[100][100], B[100][100], C[100][100], D[100][100];
    
    // Input matrices A and B
    inputMatrix(A, row, col, 'A');
    inputMatrix(B, row, col, 'B');
    
    // Add matrices A and B
    addMatrices(A, B, C, row, col);
    // Subtract matrix B from A
    subtractMatrices(A, B, D, row, col);
    
    // Print the results
    printf("Matrix A + B:\n");
    printMatrix(C, row, col);
    
    printf("Matrix A - B:\n");
    printMatrix(D, row, col);
    
    return 0;
}
