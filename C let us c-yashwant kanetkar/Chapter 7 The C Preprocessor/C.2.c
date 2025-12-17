// Write macro definitions with arguments for calculation of area and perimeter of a triangle, a square and a circle. Store these macro definitions in a file called “areaperi.h”. Include this file in your program, and call the macro definitions for calculating area and perimeter for different squares, triangles and circles.
#include <stdio.h>
#include "areaperi.h"
int main(int argc, char const *argv[])
{
    float base, height, side1, side2, side3, side, radius;
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);
    printf("area of triangle: %.2f\n", AREA_OF_TRIANGLE(base, height));
    printf("Enter first side of triangle: ");
    scanf("%f", &side1);
    printf("Enter second side of triangle: ");
    scanf("%f", &side2);
    printf("Enter third side of triangle: ");
    scanf("%f", &side3);
    printf("perimeter of triangle: %.2f\n", PERIMETER_OF_TRIANGLE(side1, side2, side3));
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("area of square: %.2f\n", AREA_OF_SQUARE(side));
    printf("perimeter of square: %.2f\n", PERIMETER_OF_SQUARE(side));
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("area of circle: %.2f\n", AREA_OF_CIRCLE(radius));
    printf("perimeter of circle: %.2f\n", PERIMETER_OF_CIRCLE(radius));
    return 0;
}
