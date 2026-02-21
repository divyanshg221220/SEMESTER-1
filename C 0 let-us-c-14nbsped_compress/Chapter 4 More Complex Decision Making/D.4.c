// If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. 
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
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
    {
        printf("valid\n");
    }
    else
    {
        printf("invalid\n");
    }
    return 0;
}