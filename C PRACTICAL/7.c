// Input radius, compute are, diameter, & circumference of circle and display.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float r;
    printf("Enter Radius of Circle : ");
    scanf("%f",&r);
    printf("Area of Circle = %.2f\n",3.14*r*r);
    printf("Diameter of Circle = %.2f\n",2*r);
    printf("Circumference of Circle = %.2f",2*3.14*r);
    return 0;
}
