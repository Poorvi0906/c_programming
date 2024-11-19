#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[100];
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    // Remove non-alphabet characters
    removeNonAlphabets(str);
    
    // Display the modified string
    printf("Modified string: %s\n", str);
    
    return 0;
}
