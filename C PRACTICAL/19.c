// Find All Prime Numbers Between 1 and n
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",1);
    for (int i=2;i<=n;i++)
    {
        bool isPrime=true;
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                isPrime=false;
                break;
            } 
        }
        if (isPrime)
        {
            printf(" %d",i);
        }    
    }
    return 0;
}
