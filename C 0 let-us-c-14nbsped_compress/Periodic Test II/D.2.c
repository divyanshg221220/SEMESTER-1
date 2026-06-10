// Write a recursive function which prints the prime factors of the number that it receives when called from main( ). 
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