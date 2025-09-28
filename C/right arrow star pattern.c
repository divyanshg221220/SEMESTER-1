// RIGHT ARROW STAR PATTERN
// *****
//  ****
//   ***
//    **
//     *
//    **
//   ***
//  ****
// *****
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=(q/2); i++)
    {
        for (int j=1; j<i; j++)
        {
            printf(" ");
        }
        for (int j=((q+1)/2); j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    if (q%2!=0)
    {
        for (int i=1; i<(q/2+1); i++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (int i=(q/2); i>=1; i--)
    {
        for (int j=1; j<i; j++)
        {
            printf(" ");
        }
        for (int j=((q+1)/2); j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
