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

void transposeMatrix(int matrix[][100], int transposed[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int row, col;

    // Prompt user to enter the size of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    int matrix[100][100], transposed[100][100];

    // Input matrix elements
    inputMatrix(matrix, row, col);

    // Transpose the matrix
    transposeMatrix(matrix, transposed, row, col);

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    printMatrix(transposed, col, row); // Note that rows and columns are swapped here

    return 0;
}

