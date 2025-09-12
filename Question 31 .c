// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, remainder, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; 

    while (num > 0) {
        remainder = num % 2;          
        binary = binary + remainder * place; 
        place = place * 10;           
        num = num / 2;              
    }

    printf("Binary of %d = %d\n", temp, binary);

    return 0;
}
