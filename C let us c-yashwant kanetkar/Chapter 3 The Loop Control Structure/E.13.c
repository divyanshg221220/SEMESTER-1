// The natural logarithm can be approximated by the following series.
// (x - 1) / 2 + ( 1 / 2 ) ( (x - 1) / x ) ^ 2 + ( 1 / 2 ) ( (x - 1) / x ) ^ 3 + ( 1 / 2 ) ( (x - 1) / x ) ^ 4 + ....
// If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float x, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    sum += (x - 1.0) / 2.0;
    for (int i = 2.0; i <= 7.0; i++)
    {
        sum += (1.0 / 2.0) * pow((x - 1.0) / x, i);
    }
    printf("sum: %.2f\n", sum);
    return 0;
}