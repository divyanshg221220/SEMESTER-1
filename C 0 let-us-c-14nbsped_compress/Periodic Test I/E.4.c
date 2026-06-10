// If three integers are entered through the keyboard, write a program to determine whether they form a Pythogorean triplet or not.  
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int side1, side2, side3;
    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);
    if ((side1 * side1) + (side2 * side2) == (side3 * side3) || (side1 * side1) + (side3 * side3) == (side2 * side2) || (side2 * side2) + (side3 * side3) == (side1 * side1))
    {
        printf("pythogorean triplet");
    }
    else
    {
        printf("not pythogorean triplet");
    }
    return 0;
}