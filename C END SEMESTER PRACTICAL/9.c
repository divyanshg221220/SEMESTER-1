// Find largest of 3 numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if (a>=b && a>=c)
    {
        printf("%d is largest",a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d is largest",b);
    }
    else if (c>=a && c>=b)
    {
        printf("%d is largest",c);
    }
    return 0;
}
