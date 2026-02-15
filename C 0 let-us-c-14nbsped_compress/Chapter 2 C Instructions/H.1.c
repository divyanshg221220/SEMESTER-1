// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%5d", &num);
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("sum: %d\n", sum);
    return 0;
}