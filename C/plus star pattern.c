// PLUS STAR PATTERN
//     +
//     +
//     +
//     +
// +++++++++
//     +
//     +
//     +
//     +
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<((q+1)/2); i++)
    {
        for (int j=1; j<((q+1)/2); j++)
        {
            printf(" ");
        }
        if (q%2==0)
        {
            for (int k=0; k<=1; k++)
            {
                printf("+");
            }
        }
        else
        {
            printf("+");
        }
        printf("\n");
    }
    if (q%2==0)
    {
        for (int i=0; i<=1; i++)
        {
            for (int i=1; i<=q; i++)
            {
                printf("+");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i=1; i<=q; i++)
        {
            printf("+");
        }
        printf("\n");
    }
    for (int i=1; i<((q+1)/2); i++)
    {
        for (int j=1; j<((q+1)/2); j++)
        {
            printf(" ");
        }
        if (q%2==0)
        {
            for (int k=0; k<=1; k++)
            {
                printf("+");
            }
        }
        else
        {
            printf("+");
        }
        printf("\n");
    }
    return 0;
}