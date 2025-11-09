// Write a recursive program to find the GCD of two numbers using Euclid’s algorithm.
#include <stdio.h>
void gcd(int a,int b);
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter first integers: ");
    scanf("%d",&a);
    printf("Enter second integers: ");
    scanf("%d",&b);
    gcd(a,b);
    return 0;
}
void gcd(int a,int b)
{
    if (b==0)
    {
        printf("GCD is %d\n",a);
        return;
    }
    gcd(b,a%b);
}