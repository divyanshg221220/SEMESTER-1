// If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a, b, c, s, area;
    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area: %.2f\n", area);
    return 0;
}