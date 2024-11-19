#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to check if a string is a palindrome
int isPalindrome(char str[], int start, int end) {
    // Base case: if the start index is greater than or equal to the end index
    if (start >= end) {
        return 1;
    }
    
    // If the characters at start and end are not the same, it's not a palindrome
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }

    // Move towards the center and check the next pair of characters
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate the length of the string
    int len = strlen(str);
    
    // Check if the string is a palindrome using the recursive function
    if (isPalindrome(str, 0, len - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
