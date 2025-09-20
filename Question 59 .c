// Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0, oddCount = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Count of even numbers = %d\n", evenCount);
    printf("Count of odd numbers = %d\n", oddCount);

    return 0;
}
