// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int base, exponent;
    int result = 1;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number: ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    printf("result: %d\n", result);
    return 0;
}