#include <stdio.h>

// Function to calculate factorial using recursion
long long int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check for non-negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using the recursive function
        long long int result = factorial(number);
        
        // Display the result
        printf("The factorial of %d is: %lld\n", number, result);
    }
    
    return 0;
}
