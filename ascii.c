#include <stdio.h>

int main() {
    char a;
    
    // Prompt user to enter a character
    printf("Enter any alphabetic character: ");
    scanf("%c", &a);
    
    // Display the ASCII value
    printf("The ASCII value of '%c' is %d\n", a, (int)a);
    
    return 0;
}