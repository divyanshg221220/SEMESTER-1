// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int length, breadth;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        printf("area is greater than perimeter\n");
    }
    else
    {
        printf("area is not greater than perimeter\n");
    }
    return 0;
}