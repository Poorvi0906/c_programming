#include <stdio.h>

void decimalToBinary(int number) {
    int binary[32];  // To store binary digits (assuming a maximum of 32 bits for an integer)
    int index = 0;

    // Special case for 0
    if (number == 0) {
        printf("0");
        return;
    }

    // Convert to binary
    while (number > 0) {
        binary[index] = number % 2;  // Store the remainder (binary digit)
        number = number / 2;         // Update the number
        index++;
    }

    // Print the binary number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");  // Newline for better readability
}

int main() {
    int number;
    
    // Prompt user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Binary equivalent: ");
    decimalToBinary(number);
    
    return 0;
}


