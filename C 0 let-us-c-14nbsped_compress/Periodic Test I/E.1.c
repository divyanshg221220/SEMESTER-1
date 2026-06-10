// Write a program to calculate the sum of the following series: 
// 1! 2! + 2! 3! + 3! 4! + 4! 5! + …… + 9! 10! 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int sum = 0;
    for (int i = 1; i <= 9; i++)
    {
        long long int factorial1 = 1, factorial2 = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial1 *= j;
        }
        for (int j = 1; j <= i + 1; j++)
        {
            factorial2 *= j;
        }
        sum += factorial1 * factorial2;
    }
    printf("result: %lld", sum);
    return 0;
}