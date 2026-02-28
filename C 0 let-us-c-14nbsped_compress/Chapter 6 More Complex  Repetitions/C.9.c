// Write a program to generate all Pythogorean Triplets with side length less than or equal to 30. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int p, b, h;
    printf("pythogorean triplets:");
    printf("\n");
    for (p = 1; p <= 30; p++)
    {
        for (b = p; b <= 30; b++)
        {
            for (h = b; h <= 30; h++)
            {
                if (p * p + b * b == h * h)
                {
                    printf("%d %d %d\n", p, b, h);
                }
            }
        }
    }
    return 0;
}