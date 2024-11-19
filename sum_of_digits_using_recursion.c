#include <stdio.h>

// Recursive function to calculate the sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;  // Base case
    } else {
        return (n % 10) + sumOfDigits(n / 10);  // Recursive case
    }
}

int main() {
    int number;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Ensure the number is non-negative
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        // Calculate sum of digits using the recursive function
        int sum = sumOfDigits(number);
        
        // Display the result
        printf("The sum of the digits of %d is: %d\n", number, sum);
    }
    
    return 0;
}
