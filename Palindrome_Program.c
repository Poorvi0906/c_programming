#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, flag = 0;
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find the length of the string
    len = strlen(str);
    
    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0'; // Null-terminate the reversed string
    
    // Check if the original string and the reversed string are the same
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 1;
            break;
        }
    }
    
    // Display the result
    if (flag == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}

