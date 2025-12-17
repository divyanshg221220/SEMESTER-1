// Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function which returns a value 1 if the point (x, y) lines inside the triangle ABC, otherwise a value 0. 
#include <stdio.h>
#include <math.h>
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float area(float a, float b, float c)
{
    float s;
    s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int isPointInTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y)
{
    float A, A1, A2, A3;
    A = area(distance(x1, y1, x2, y2), distance(x2, y2, x3, y3), distance(x3, y3, x1, y1));
    A1 = area(distance(x, y, x2, y2), distance(x2, y2, x3, y3), distance(x3, y3, x, y));
    A2 = area(distance(x1, y1, x, y), distance(x, y, x3, y3), distance(x3, y3, x1, y1));
    A3 = area(distance(x1, y1, x2, y2), distance(x2, y2, x, y), distance(x, y, x1, y1));
    return (A == A1 + A2 + A3);
}
int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter coordinates of triangle vertex A (x1): ");
    scanf("%f", &x1);
    printf("Enter coordinates of triangle vertex A (y1): ");
    scanf("%f", &y1);
    printf("Enter coordinates of triangle vertex B (x2): ");
    scanf("%f", &x2);
    printf("Enter coordinates of triangle vertex B (y2): ");
    scanf("%f", &y2);
    printf("Enter coordinates of triangle vertex C (x3): ");
    scanf("%f", &x3);
    printf("Enter coordinates of triangle vertex C (y3): ");
    scanf("%f", &y3);
    printf("Enter coordinates of point P (x): ");
    scanf("%f", &x);
    printf("Enter coordinates of point P (y): ");
    scanf("%f", &y);
    if (isPointInTriangle(x1, y1, x2, y2, x3, y3, x, y))
    {
        printf("inside the triangle\n");
    }
    else
    {
        printf("outside the triangle\n");
    }
    return 0;
}