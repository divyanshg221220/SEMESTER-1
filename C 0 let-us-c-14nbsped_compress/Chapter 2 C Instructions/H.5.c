// Write a program to receive values of latitude (L1, L2) and longitude (G1, G2), in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is: 
// D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) ) 
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float l1, l2, g1, g2, d;
    printf("Enter L1: ");
    scanf("%f", &l1);
    printf("Enter L2: ");
    scanf("%f", &l2);
    printf("Enter G1: ");
    scanf("%f", &g1);
    printf("Enter G2: ");
    scanf("%f", &g2);
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("distance: %.2f\n", d);
    return 0;
}