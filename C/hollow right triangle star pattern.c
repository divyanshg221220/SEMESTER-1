// HOLLOW RIGHT TRIANGLE STAR PATTERN
// *
// **
// * *
// *  *
// *   *
// *    *
// *     *
// *      *
// *********
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=q; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if (i==1 || i==q || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}