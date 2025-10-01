// HOLLOW INVERTED PYRAMID STAR PATTERN
// *****************
//  *             *
//   *           *
//    *         *
//     *       *
//      *     *
//       *   *
//        * *
//         *
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=q; i++)
    {
        for (int j=1; j<i; j++)
        {
            printf(" ");
        }
        for (int k=(2*q-i); k>=i; k--)
        {
            if (k==i || k==(2*q-i) || i==1)
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
