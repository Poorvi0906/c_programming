#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: if start index is greater than or equal to end index
    }
    
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Move towards the center
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate the length of the string
    int len = strlen(str);
    
    // Reverse the string using the recursive function
    reverseString(str, 0, len - 1);
    
    // Display the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}

