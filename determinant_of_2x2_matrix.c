#include <stdio.h>

int main() {
    int a, b, c, d;
    
    // Prompt user to enter the elements of the matrix
    printf("Enter 4 elements:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Calculate the determinant
    int determinant = (a * d) - (b * c);
    
    // Display the determinant
    printf("The determinant of the matrix is: %d\n", determinant);
    
    return 0;
}
