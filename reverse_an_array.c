#include <stdio.h>

void reverseArray(int arr[], int size) 
{
    int start = 0, end = size - 1;
    while (start < end) 
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the indices towards the center
        start++;
        end--;
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
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call the function to reverse the array
    reverseArray(arr, size);
    
    // Display the reversed array
    printf("Reversed array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
