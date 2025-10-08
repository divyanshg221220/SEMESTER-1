// Write a program to check whether a given number is a palindrome using a loop.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,originalNum,reversedNum=0,remainder;
    printf("Enter a number : ");
    scanf("%d",&n);
    originalNum=n;
    while (n!=0)
    {
        remainder=n%10;
        reversedNum=reversedNum*10+remainder;
        n/=10;
    }
    if (originalNum==reversedNum)
    {
        printf("%d, is a palindrome.",originalNum);
    }
    else
    {
        printf("%d, is not a palindrome.",originalNum);
    }
    return 0;
}