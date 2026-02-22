// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 1, originalNum, remainder, result;
    printf("Armstrong numbers between 1 and 500 are:\n");
    while (n <= 500)
    {
        result = 0;
        originalNum = n;
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == n)
        {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}
