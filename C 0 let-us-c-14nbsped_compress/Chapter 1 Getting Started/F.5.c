// The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float l, b, r;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    printf("area of rectangle: %.2f\n", l * b);
    printf("perimeter of rectangle: %.2f\n", 2 * (l + b));
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("area of circle: %.2f\n", 2 * 3.14 * r);
    printf("circumference of circle: %.2f\n", 3.14 * r * r);
    return 0;
}