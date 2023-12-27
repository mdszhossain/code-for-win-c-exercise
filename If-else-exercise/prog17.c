// Checking profit or loss

#include <stdio.h>

int main()
{
    int cost_price, sell_price, profit, loss;

    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter sell price: ");
    scanf("%d", &sell_price);

    profit = sell_price - cost_price;
    loss = cost_price - sell_price;

    if(cost_price > sell_price) {
        printf("Loss: %d\n", loss);
    } else {
        printf("Profit: %d\n", profit);
    }

    return 0;
}