// A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
#include <stdio.h>
void prime_factors(int num)
{
    for (int i = 2; i <= num; i++)
    {  
        int isPrime = 1;
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
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("prime factors: ");
    prime_factors(num);
    return 0;
}
