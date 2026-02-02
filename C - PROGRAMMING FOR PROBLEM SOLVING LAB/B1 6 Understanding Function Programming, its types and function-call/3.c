// Write a program to calculate sum of first n natural numbers using recursive function.
#include <stdio.h>
void sumOfNaturalNumbers(int n,int sum);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sumOfNaturalNumbers(n,0);
    return 0;
}
void sumOfNaturalNumbers(int n,int sum)
{
    if (sum==n)
    {
        printf("Sum of first %d natural numbers is %d\n",n,sum);
    }
    else
    {
        return sumOfNaturalNumbers(n,sum+1);
    }
}