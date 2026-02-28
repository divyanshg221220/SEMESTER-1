// Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i * i * i <= n; i++)
    {
        for (int j = i + 1; j * j * j <= n; j++)
        {
            int sum1 = i * i * i + j * j * j;
            if (sum1 > n)
            {
                break;
            }
            for (int k = i + 1; k * k * k <= n; k++)
            {
                for (int l = k + 1; l * l * l <= n; l++)
                {
                    int sum2 = k * k * k + l * l * l;
                    if (sum2 > n)
                    {
                        break;
                    }
                    if (sum1 == sum2)
                    {
                        printf("%d^3 + %d^3 = %d^3 + %d^3 = %d\n", i, j, k, l, sum1);
                    }
                }
            }
        }
    }    
    return 0;
}