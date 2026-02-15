// Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, φ).  
// Hint:  r = sqrt ( x ^ 2 + y ^ 2 ) and φ = tan-1 ( y / x )
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float x, y, r, phi;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    r = sqrt(x * x + y * y);
    phi = atan(y / x);
    printf("r: %.2f\n", r);
    printf("phi: %.2f\n", phi);
    return 0;
}