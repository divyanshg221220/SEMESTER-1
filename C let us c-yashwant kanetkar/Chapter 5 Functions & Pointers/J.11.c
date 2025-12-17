// Write a function to compute the greatest common divisor given by Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows: 
// 1980 / 1617 = 1     1980 – 1 * 1617 = 363 
// 1617 / 363 = 4      1617 – 4 * 363 = 165 
// 363 / 165 = 2       363 – 2 * 165 = 33 
// 165 / 33 = 5        165 – 5 * 33 = 0 
// Thus, the greatest common divisor is 33.
#include <stdio.h>
int gcd(int a, int b)
{
    int q, r;
    while (b != 0)
    {
        q = a / b;
        r = a - q * b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int J = 1980, K = 1617;
    printf("gcd (%d , %d): %d\n", J, K, gcd(J, K));
    return 0;
}