// Write a program to multiply two integers using bitwise operators. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int result = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            result += a;
        }
        a <<= 1;
        b >>= 1;
    }
    printf("result: %d", result);
    return 0;
}