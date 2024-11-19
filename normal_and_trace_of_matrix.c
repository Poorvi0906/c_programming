#include <stdio.h>
#include <math.h>

// Function to calculate the trace of a matrix
int trace(int matrix[][100], int size) {
    int trace = 0;
    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

// Function to calculate the Frobenius norm of a matrix
double frobeniusNorm(int matrix[][100], int size) {
    double norm = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            norm += matrix[i][j] * matrix[i][j];
        }
    }
    return sqrt(norm);
}

int main() {
    int size, i, j;
    
    // Prompt user to enter the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    
    int matrix[100][100];
    
    // Prompt user to enter the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate and display the trace of the matrix
    int matrixTrace = trace(matrix, size);
    printf("The trace of the matrix is: %d\n", matrixTrace);

    // Calculate and display the Frobenius norm of the matrix
    double norm = frobeniusNorm(matrix, size);
    printf("The Frobenius norm of the matrix is: %.2lf\n", norm);
    
    return 0;
}
