// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x, y;
    printf("Enter x coordinate: ");
    scanf("%f", &x);
    printf("Enter y coordinate: ");
    scanf("%f", &y);
    if (x == 0 && y == 0)
    {
        printf("point lies at the origin\n");
    }
    else if (y == 0)
    {
        printf("point lies on the x-axis\n");
    }
    else if (x == 0)
    {
        printf("point lies on the y-axis\n");
    }
    return 0;
}
