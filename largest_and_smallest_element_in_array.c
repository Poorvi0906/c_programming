#include <stdio.h>

void findLargestAndSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int size, largest, smallest;
    
    // Prompt user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Prompt user to enter the elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the largest and smallest elements
    findLargestAndSmallest(arr, size, &largest, &smallest);
    
    // Display the results
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    
    return 0;
}
