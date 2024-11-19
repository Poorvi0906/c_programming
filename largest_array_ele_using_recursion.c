#include <stdio.h>

// Recursive function to find the largest element in an array
int findLargest(int arr[], int n) {
    // Base case: If there's only one element, it's the largest
    if (n == 1) {
        return arr[0];
    }
    
    // Recursive case: Find the largest in the rest of the array
    int max_of_rest = findLargest(arr, n - 1);
    
    // Compare the last element with the largest of the rest
    if (arr[n - 1] > max_of_rest) {
        return arr[n - 1];
    } else {
        return max_of_rest;
    }
}

int main() {
    int n;
    
    // Prompt user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Prompt user to enter the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the largest element using the recursive function
    int largest = findLargest(arr, n);
    
    // Display the largest element
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}

