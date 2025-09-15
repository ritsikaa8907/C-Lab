// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary, onesComp = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; 

    while (binary != 0) {
        digit = binary % 10;         
        if (digit == 0)
            onesComp += 1 * place;   
        else
            onesComp += 0 * place;   

        place *= 10;                  
        binary /= 10;                 
    }

    printf("1's Complement of %lld = %lld\n", temp, onesComp);

    return 0;
}
