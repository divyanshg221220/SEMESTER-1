// The X and Y coordinates of 10 different points are entered through the keyboard. Write a program to find the distance of last point from the first point (sum of distance between consecutive points).
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float x[10], y[10], distance = 0.0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter x coordinate of point %d: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter y coordinate of point %d: ", i + 1);
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        distance += sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));
    }
    printf("distance: %.2f\n", distance);
    return 0;
}