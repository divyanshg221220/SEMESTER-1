// HOLLOW RHOMBUS STAR PATTERN
//         *********
//        *       *
//       *       *
//      *       *
//     *       *
//    *       *
//   *       *
//  *       *
// *********
#include <stdio.h>
int main(int argc, char const *argv[])
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
        for (int k=1; k<=q; k++)
        {
            if (i==1 || i==q || k==1 || k==q)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
