// Write a program to print the following pattern using nested loops:
// i) *
//   ***
//  *****
// *******
// ii) 1
//     12
//     123
//     1234
//     12345
#include <stdio.h>
int i()
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=q; i++)
    {
        for (int j=q; j>i; j--)
        {
            printf(" ");
        }
        for (int k=1; k<=(2*i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int ii()
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1;i<=q; i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int q;
    printf("Write a program to print the following pattern using nested loops:\n");
    printf("1. *\n   ***\n  *****\n *******\n");
    printf("2. 1\n     12\n     123\n     1234\n     12345\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if (q==1)
    {
        i();
    }
    else if (q==2)
    {
        ii();
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}

