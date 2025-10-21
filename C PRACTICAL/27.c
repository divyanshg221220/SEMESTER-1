// Write a function to find the sum of digits of a given number.
#include <stdio.h>
void sumOfDigits(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sumOfDigits(n);
    return 0;
}
void sumOfDigits(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits is %d\n",sum);
}