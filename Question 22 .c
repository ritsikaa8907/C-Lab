// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", (amount / costPrice) * 100);
    } 
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", (amount / costPrice) * 100);
    } 
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
