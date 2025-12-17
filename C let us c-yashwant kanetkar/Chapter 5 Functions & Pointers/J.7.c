// Given three variables x, y, z write a function to circularly shift their values to right. In other words if x = 5, y = 8, z = 10 after circular shift y = 5, z = 8, x =10 after circular shift y = 5, z = 8 and x = 10. Call the function with variables a, b, c to circularly shift values. 
#include <stdio.h>
void circularShift(int *x, int *y, int *z)
{
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    circularShift(&a, &b, &c);
    printf("after circular shift: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}