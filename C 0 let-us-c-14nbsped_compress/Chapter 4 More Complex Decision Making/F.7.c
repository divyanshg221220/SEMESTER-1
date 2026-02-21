// If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float side1, side2, side3;
    printf("Enter first side: ");
    scanf("%f", &side1);
    printf("Enter second side: ");
    scanf("%f", &side2);
    printf("Enter third side: ");
    scanf("%f", &side3);
    if (side1 == side2 && side2 == side3 && side3 == side1)
    {
        printf("equilateral triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("isosceles triangle\n");
    }
    else if (side1 != side2 && side2 != side3 && side3 != side1)
    {
        printf("scalene triangle\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2)
    {
        printf("right angled triangle\n");
    }
    return 0;
}