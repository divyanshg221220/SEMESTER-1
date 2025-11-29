// Check if number is divisible by 3 or 5
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
    {
        printf("%d is divisible by 3 and 5",n);
    }
    else if (n%3==0)
    {
        printf("%d is divisible by 3",n);
    }
    else if (n%5==0)
    {
        printf("%d is divisible by 5",n);
    }
    else
    {
        printf("%d is not divisible by 3 and 5",n);
    } 
    return 0;
}
