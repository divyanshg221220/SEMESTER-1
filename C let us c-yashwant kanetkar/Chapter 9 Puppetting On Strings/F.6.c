// A factory has 3 division and stocks 4 categories of products. An inventory table is updated for each division and for each product as they are received. There are three independent suppliers of products to the factory: 
// (a) Design a data format to represent each transaction. 
// (b) Write a program to take a transaction and update the inventory. 
// (c) If the cost per item is also given write a program to calculate the total inventory values. 
#include <stdio.h>
struct product
{
    int division;
    int category;
    int supplier;
    float cost;
};
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of transactions: ");
    scanf("%d", &n);
    struct product inventory[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter division: ");
        scanf("%d", &inventory[i].division);
        printf("Enter category: ");
        scanf("%d", &inventory[i].category);
        printf("Enter supplier: ");
        scanf("%d", &inventory[i].supplier);
        printf("Enter cost: ");
        scanf("%f", &inventory[i].cost);
    }
    float totalValue = 0;
    for (int i = 0; i < n; i++)
    {
        totalValue += inventory[i].cost;
    }
    printf("total inventory values: %.2f\n", totalValue);
    return 0;
}