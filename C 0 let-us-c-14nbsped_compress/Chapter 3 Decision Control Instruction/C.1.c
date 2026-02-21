// If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if (cp < sp)
    {
        printf("profit: %d",sp-cp);
    }
    else if (cp > sp)
    {
        printf("loss: %d",cp-sp);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
