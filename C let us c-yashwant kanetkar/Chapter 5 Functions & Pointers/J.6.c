// Write a C function to evaluate the series
// sin(x) = x - ((x^3)/3!) + ((x^5)/5!) - ((x^7)/7!) + ...
// to five significant digits.
#include <stdio.h>
#include <math.h>
double power(double base, int exp)
{
    return pow(base, exp);
}
double factorial(int n)
{
    double factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
double sinx(double x)
{
    double sum = x;
    int sign = -1;
    for (int i = 1; i < 5; i++)
    {
        sum += sign * (power(x, 2 * i + 1) / factorial(2 * i + 1));
        sign = -sign;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    double n;
    printf("Enter the value of x: ");
    scanf("%lf", &n);
    printf("sin(%.5lf) = %.5lf\n", n, sinx(n));
    return 0;
}