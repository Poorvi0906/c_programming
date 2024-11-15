#include <stdio.h>

int main() {
    int size, i, sum = 0;
    
    // Prompt user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of the elements
    for(i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Display the sum of the elements
    printf("The sum of the elements is: %d\n", sum);
    
    return 0;
}
