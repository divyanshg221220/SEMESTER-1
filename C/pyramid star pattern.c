// PYRAMID STAR PATTERN
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
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
        for (int k=1; k<=(2*i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
