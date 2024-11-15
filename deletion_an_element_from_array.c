#include <stdio.h>

int main() {
    int size, i, position;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Prompt the user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Prompt user to enter the position of the element to be deleted
    printf("Enter the position of the element to be deleted (1 to %d): ", size);
    scanf("%d", &position);
    
    // Adjust the position to be zero-indexed
    position--;
    
    // Check if the position is valid
    if(position < 0 || position >= size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left to delete the element
        for(i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        // Decrement the size of the array
        size--;
        
        // Display the array after deletion
        printf("Array after deletion: ");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
