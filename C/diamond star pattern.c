// DIAMOND STAR PATTERN
int main(int argc, char const *argv[])
{
    printf("Enter the number of rows/columns you want to print: ");
    int n;
    scanf("%d",&n);
    for (int i=1; i<=(n/2); i++)
    {
        for (int j=(n/2); j>=i; j--)
        {
            printf(" ");
        }
        for (int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    if (n%2!=0)
    {
        for (int i=1; i<=(n); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=(n/2); i>=1; i--)
    {
        for (int j=(n/2); j>=i; j--)
        {
            printf(" ");
        }
        for (int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
