// Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("greatest number: %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    return 0;
}