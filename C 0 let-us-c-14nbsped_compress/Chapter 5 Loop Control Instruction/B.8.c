// Write a program to find the octal equivalent of the entered number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, octalNum = 0, placeValue = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        octalNum += (n % 8) * placeValue;
        n /= 8;
        placeValue *= 10;
    }
    printf("octal equivalent: %d\n", octalNum);
    return 0;
}