#include <stdio.h>

int main() {
    int number, sum = 0;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        // Add the last digit to the sum
        sum += number % 10;
        // Remove the last digit from the number
        number /= 10;
    }
    
    // Display the sum of the digits
    printf("The sum of the digits is: %d\n", sum);
    
    return 0;
}
