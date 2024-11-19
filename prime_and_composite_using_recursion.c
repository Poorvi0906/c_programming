#include <stdio.h>

// Recursive function to check if a number is prime
int isPrime(int n, int i) {
    // Base cases
    if (n <= 2) {
        return (n == 2) ? 1 : 0; // 2 is prime, numbers less than 2 are not prime
    }
    if (n % i == 0) {
        return 0; // n is divisible by i, so it's not prime
    }
    if (i * i > n) {
        return 1; // No divisors found, n is prime
    }

    // Recursive case
    return isPrime(n, i + 1);
}

int main() {
    int number;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is prime using the recursive function
    if (isPrime(number, 2)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite number.\n", number);
    }
    
    return 0;
}

