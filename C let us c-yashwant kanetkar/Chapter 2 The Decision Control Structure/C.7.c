// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int angle1, angle2, angle3;
    printf("Enter first angle: ");
    scanf("%d", &angle1);
    printf("Enter second angle: ");
    scanf("%d", &angle2);
    printf("Enter third angle: ");
    scanf("%d", &angle3);
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("valid\n");
    }
    else
    {
        printf("not valid\n");
    }
    return 0;
}
