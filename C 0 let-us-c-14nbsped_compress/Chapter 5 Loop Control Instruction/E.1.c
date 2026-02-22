// Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int isPrime;
    printf("Prime numbers from 1 to 300 are:\n");
    for (int i = 2; i <= 300; i++)
    {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (!isPrime)
            continue;
        printf("%d\n", i);
    }
    return 0;
}