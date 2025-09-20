// Count positive, negative, and zero elements in an array.
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

    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positiveCount++;
        } 
        else if(arr[i] < 0) {
            negativeCount++;
        } 
        else {
            zeroCount++;
        }
    }

    printf("Count of positive numbers = %d\n", positiveCount);
    printf("Count of negative numbers = %d\n", negativeCount);
    printf("Count of zeros = %d\n", zeroCount);

    return 0;
}
