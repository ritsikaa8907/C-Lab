// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Ask user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add each element to sum
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
