#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}

int main() {
    long long n;

    // Enter the binary number
    printf("Enter a binary number: ");
    scanf("%lld", &n);

    // Convert and display the decimal number
    printf("Decimal equivalent: %d\n", binaryToDecimal(n));

    return 0;
}