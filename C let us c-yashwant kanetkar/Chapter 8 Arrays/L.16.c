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
    float a1 = 137.4, a2 = 155.2, a3 = 149.3, a4 = 160.0, a5 = 155.6, a6 = 149.7, b1 = 80.9, b2 = 92.62, b3 = 97.93, b4 = 100.25, b5 = 68.95, b6 = 120.0, angle1 = 0.78, angle2 = 0.89, angle3 = 1.35, angle4 = 9.00, angle5 = 1.25, angle6 = 1.75, area1, area2, area3, area4, area5, area6;
    area1 = 0.5 * a1 * b1 * sin(angle1);
    area2 = 0.5 * a2 * b2 * sin(angle2);
    area3 = 0.5 * a3 * b3 * sin(angle3);
    area4 = 0.5 * a4 * b4 * sin(angle4);
    area5 = 0.5 * a5 * b5 * sin(angle5);
    area6 = 0.5 * a6 * b6 * sin(angle6);
    float area[6] = {area1, area2, area3, area4, area5, area6};
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
