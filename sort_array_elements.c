#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    bubbleSort(arr, size);
    
    // Display the sorted array
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
