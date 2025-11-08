//Write a program to find profit or loss percentage given cost price and selling price//
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("You made a profit of %.2f%%\n", percentage);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("You incurred a loss of %.2f%%\n", percentage);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
