#include <stdio.h>

// Recursive function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, gcd is a
    }
    return gcd(b, a % b); // Recursive case
}

// Function to find LCM using the formula
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // Use the gcd function to calculate lcm
}

int main() {
    int num1, num2;
    
    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate LCM using the lcm function
    int result = lcm(num1, num2);
    
    // Display the result
    printf("The LCM of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}
