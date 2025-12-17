// If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by 
// area=(S(S-a)(S-b)(S-c))^(1/2)
// where, S = ( a + b + c ) / 2
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    float s, area;
    printf("Enter first side: ");
    scanf("%d", &a);
    printf("Enter second side: ");
    scanf("%d", &b);
    printf("Enter third side: ");
    scanf("%d", &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area: %.2f\n", area);
    return 0;
}
