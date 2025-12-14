// Write a program to find the octal equivalent of the entered number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, octalNum = 0, placeValue = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        octalNum += (num % 8) * placeValue;
        num /= 8;
        placeValue *= 10;
    }
    printf("octal equivalent: %d\n", octalNum);
    return 0;
}