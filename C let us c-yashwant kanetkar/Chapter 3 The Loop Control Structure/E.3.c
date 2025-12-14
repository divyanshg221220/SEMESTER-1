// Write a program to add first seven terms of the following series using a for loop:
// 1/1! + 2/2! + 3/3! + ......
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sum = 0.0;
    for (float i = 1; i <= 7; i++)
    {
        float factorial = 1.0;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += i / factorial;
    }
    printf("result: %.2f\n", sum);
    return 0;
}