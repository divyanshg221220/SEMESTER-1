// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cost_price, selling_price, profit, loss;
    printf("Enter Cost Price: ");
    scanf("%d", &cost_price);
    printf("Enter Selling Price: ");
    scanf("%d", &selling_price);
    if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        printf("Loss: %d\n", loss);
    }
    else if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("Profit: %d\n", profit);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}
