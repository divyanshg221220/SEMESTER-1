// Check if number is negative, positive or zero
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d is negative",n);
    }
    else if (n>0)
    {
        printf("%d is positive",n);
    }
    else
    {
        printf("%d is zero",n);
    }
    return 0;
}
