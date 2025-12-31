// The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known. 
// Area = (1 / 2 ) ab sin ( angle ) 
// Given the following 6 triangular pieces of land, write a program to find their area and determine which is largest, 
// Plot No.    a        b        angle
// 1        137.4     80.9        0.78
// 2        155.2     92.62       0.89
// 3        149.3     97.93       1.35
// 4        160.0    100.25       9.00 
// 5        155.6     68.95       1.25 
// 6        149.7    120.0        1.75
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float area[6];
    for (int i = 0; i < 6; i++)
    {
        area[i] = 0.5 * a[i] * b[i] * sin(angle[i]);
        printf("area %d: %.2f\n", i + 1, area[i]);
    }
    float largest = area[0];
    for (int i = 1; i < 6; i++)
    {
        if (area[i] > largest)
        {
            largest = area[i];
        }
    }
    printf("largest: %.2f\n", largest);
    return 0;
}
