// Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equal to 1. 
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float angle, sine, cosine;
    printf("Enter angle in degrees: ");
    scanf("%f", &angle);
    sine = sin(angle * 3.14 / 180.00);
    cosine = cos(angle * 3.14 / 180.00);
    if (sine * sine + cosine * cosine == 1)
    {
        printf("sum of squares of sine and cosine of this angle is equal to 1");
    }
    else
    {
        printf("sum of squares of sine and cosine of this angle is not equal to 1");
    }
    return 0;
}