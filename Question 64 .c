// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, i, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num; 

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", maxDigit);
    return 0;
}
