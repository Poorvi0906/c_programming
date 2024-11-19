#include <stdio.h>

// Recursive function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, GCD is a
    }
    return gcd(b, a % b); // Recursive case
}

int main() {
    int num1, num2;
    
    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate GCD using the gcd function
    int result = gcd(num1, num2);
    
    // Display the result
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}
