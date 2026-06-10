// Write a function that receives variable number of arguments, where the arguments are the coordinates of a point. Based on the number of arguments received, the function should display type of shape like a point, line, triangle, etc., that can be drawn. 
#include <stdio.h>
#include <stdarg.h>
void identifyShape(int n, ...)
{
    printf("Coordinates:\n");
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
    {
        printf("(%d, %d)\n", va_arg(args, int), va_arg(args, int));
    }
    va_end(args);
    if (n == 1)
    {
        printf("point\n");
    }
    else if (n == 2)
    {
        printf("line\n");
    }
    else if (n == 3)
    {
        printf("triangle\n");
    }
    else if (n == 4)
    {
        printf("quadrilateral\n");
    }
}
int main(int argc, char const *argv[])
{
    int points;
    printf("Enter number of points: ");
    scanf("%d", &points);
    int x[points], y[points];
    for (int i = 0; i < points; i++)
    {
        printf("Enter x coordinate of point %d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter y coordinate of point %d: ", i + 1);
        scanf("%d", &y[i]);
    }
    if (points < 1)
    {
        printf("not valid");
    }
    else if (points == 1)
    {
        identifyShape(points, x[0], y[0]);
    }
    else if (points == 2)
    {
        identifyShape(points, x[0], y[0], x[1], y[1]);
    }
    else if (points == 3)
    {
        identifyShape(points, x[0], y[0], x[1], y[1], x[2], y[2]);
    }
    else if (points == 4)
    {
        identifyShape(points, x[0], y[0], x[1], y[1], x[2], y[2], x[3], y[3]);
    }
    else
    {
        printf("Coordinates:\n");
        for (int i = 0; i < points; i++)
        {
            printf("(%d, %d)\n", x[i], y[i]);
        }
        printf("polygon\n");
    }
    return 0;
}