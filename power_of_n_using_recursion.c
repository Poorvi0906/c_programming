#include <stdio.h>

// Recursive function to calculate base^exponent
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number raised to the power of 0 is 1
    } else {
        return base * power(base, exponent - 1); // Recursive case
    }
}

int main() {
    int base, exponent;
    
    // Prompt user to enter the base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Calculate the power using the recursive function
    int result = power(base, exponent);
    
    // Display the result
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}
