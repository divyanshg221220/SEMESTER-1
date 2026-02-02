// Write a program to calculate the sum of digits of a given number using a loop.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q,s=0;
    do
    {   
        printf("Enter numbers : ");
        scanf("%d",&q);
        s+=q;
        printf("\nEnter 0 to exit\n");
    } while (q!=0);
    printf("Sum : %d",s);
    return 0;
}