// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (numbers from 0 to %d with one missing): ", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum = n * (n + 1) / 2;

    int arr_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        arr_sum += arr[i];
    }

    int missing = total_sum - arr_sum;
    printf("Missing number is: %d\n", missing);

    return 0;
}
