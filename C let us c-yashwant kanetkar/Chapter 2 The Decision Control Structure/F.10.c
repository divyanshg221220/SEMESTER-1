// The policy followed by a company to process customer orders is given by the following rules: 
// (a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement. 
// (b) If has credit is not OK do not supply. Send him intimation. 
// (c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped. 
// Write a C program to implement the company policy.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int order, stock;
    char credit;
    printf("Enter the number of items ordered: ");
    scanf("%d", &order);
    printf("Enter the number of items in stock: ");
    scanf("%d", &stock);
    printf("Enter credit status (OK [O]/not OK [N]): ");
    scanf(" %c", &credit);
    if (order <= stock && credit == 'O')
    {
        printf("supply the required items\n");
    }
    else if (credit == 'N')
    {
        printf("do not supply. send him intimation.\n");
    }
    else if (credit == 'O' && order > stock)
    {
        printf("supply what is in stock. intimate to him that the balance will be shipped.\n");
    }
    return 0;
}