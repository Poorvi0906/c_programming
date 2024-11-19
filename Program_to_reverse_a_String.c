#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    int start = 0;
    int end = n - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Reverse the string
    reverseString(str);
    
    // Display the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
