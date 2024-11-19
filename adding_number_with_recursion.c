#include <stdio.h>

// Recursive function to add two numbers
int add(int a, int b) {
    // Base case
    if (b == 0) {
        return a;
    }
    // Recursive case
    return add(a ^ b, (a & b) << 1);
}

int main() {
    int num1, num2, sum;
    
    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Add numbers using the recursive function
    sum = add(num1, num2);
    
    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
