// If a five-digit number is input through the keyboard, write a program to reverse the number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%5d", &num);
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("reverse: %d\n", rev);
    return 0;
}