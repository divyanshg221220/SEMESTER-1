// Given the coordinates (x, y) of a center of a circle and it’s radius, write a program which will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions)
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float x_center, y_center, radius;
    printf("Enter x coordinate of center: ");
    scanf("%f", &x_center);
    printf("Enter y coordinate of center: ");
    scanf("%f", &y_center);
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    float x_point, y_point;
    printf("Enter x coordinate of point: ");
    scanf("%f", &x_point);
    printf("Enter y coordinate of point: ");
    scanf("%f", &y_point);
    float distance = sqrt(pow((x_point - x_center), 2) + pow((y_point - y_center), 2));
    if (distance < radius)
    {
        printf("point lies inside the circle\n");
    }
    else if (distance == radius)
    {
        printf("point lies on the circle\n");
    }
    else
    {
        printf("point lies outside the circle\n");
    }
    return 0;
}