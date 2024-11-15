#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }
    
    int temp[size];
    int j = 0;
    
    // Copy elements to temp array without duplicates
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size - 1];
    
    // Copy temp array back to original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    return j;
}

int main() {
    int size, i;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements (sorted): ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Remove duplicates
    size = removeDuplicates(arr, size);
    
    // Display the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
