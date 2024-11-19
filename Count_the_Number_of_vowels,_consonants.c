#include <stdio.h>
#include <ctype.h>

void countCharacters(char str[], int *vowels, int *consonants, int *digits, int *whitespaces, int *others) {
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else if (isspace(str[i])) {
            (*whitespaces)++;
        } else {
            (*others)++;
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0, others = 0;
    
    // Prompt user to enter a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    // Count characters in the string
    countCharacters(str, &vowels, &consonants, &digits, &whitespaces, &others);
    
    // Display the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", whitespaces);
    printf("Other characters: %d\n", others);
    
    return 0;
}
