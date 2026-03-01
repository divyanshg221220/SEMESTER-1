// Write a C function to evaluate the series 
// sin(x)=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+... 
// up to 10 terms.
#include <stdio.h>
#include <math.h>
float power(float base, int exp)
{
    return pow(base, exp);
}
float factorial(int n)
{
    float factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
float sinx(float x)
{
    float sum = x;
    int sign = -1;
    for (int i = 1; i < 10; i++)
    {
        sum += sign * (power(x, 2 * i + 1) / factorial(2 * i + 1));
        sign = -sign;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    float n;
    printf("Enter the value of x: ");
    scanf("%f", &n);
    printf("sin(%.2f) = %.2f\n", n, sinx(n));
    return 0;
}