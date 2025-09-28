// HOLLOW INVERTED RIGHT TRIANGLE STAR PATTERN
// ********
// *     *
// *    *
// *   *
// *  *
// * *
// **
// *
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=q; i++)
    {
        for (int j=q; j>i; j--)
        {
            if (j==q || j==i+1 || i==1)
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
