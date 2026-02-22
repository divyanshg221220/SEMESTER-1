// When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per the following formula
// a = p ( 1 + r / q ) ^ nq
// Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float p[10], r[10], n[10], q[10], a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter principal amount %d: ", i + 1);
        scanf("%f", &p[i]);
        printf("Enter annual interest rate %d: ", i + 1);
        scanf("%f", &r[i]);
        printf("Enter number of years %d: ", i + 1);
        scanf("%f", &n[i]);
        printf("Enter number of times interest compounds per year %d: ", i + 1);
        scanf("%f", &q[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        a[i] = p[i] * pow(1 + (r[i] / q[i]), n[i] * q[i]);
        printf("amount %d: %.2f\n", i + 1, a[i]);
    }
    return 0;
}