#include <stdio.h>

// Recursive function to find the sum of first N numbers
int sumOfNumbers(int n) {
    if (n == 0) {
        return 0;  // Base case
    } else {
        return n + sumOfNumbers(n - 1);  // Recursive case
    }
}

int main() {
    int n;
    
    // Prompt user to enter the value of N
    printf("Enter a number: ");
    scanf("%d", &n);

    // Ensure N is non-negative
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        // Calculate sum using the recursive function
        int sum = sumOfNumbers(n);
        
        // Display the result
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }
    
    return 0;
}

