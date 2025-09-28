// LEFT ARROW STAR PATTERN
// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int q;
    scanf("%d",&q);
    for (int i=1; i<=(q/2); i++)
    {
        for (int j=((q+1)/2); j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    if (q%2!=0)
    {
        printf("*\n");
    }
    for (int i=(q/2); i>=1; i--)
    {
        for (int j=((q+1)/2); j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
