#include <stdio.h>

int main() {
    int size, i, element, position;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size + 1];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Prompt user to enter the element to be inserted and its position
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position at which to insert the element (1 to %d): ", size + 1);
    scanf("%d", &position);
    
    // Adjust the position to be zero-indexed
    position--;
    
    // Shift elements to the right to make space for the new element
    for(i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[position] = element;
    
    // Increment the size of the array
    size++;
    
    // Display the array after insertion
    printf("Array after insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
