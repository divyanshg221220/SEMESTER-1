// A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
#include <stdio.h>
void prime_factors(int num, int i)
{
    if (num <= 1)
    {
        return;
    }
    if (num % i == 0)
    {
        printf("%d ", i);
        prime_factors(num / i, i);
    }
    else
    {
        prime_factors(num, i + 1);
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("prime factors: ");
    prime_factors(num, 2);
    return 0;
}