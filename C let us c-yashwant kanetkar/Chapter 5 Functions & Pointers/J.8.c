// Write a function to find the binary equivalent of a given decimal integer and display it.
#include <stdio.h>
int binary(int n)
{
    int binary = 0, remainder, place = 1;
    while (n != 0)
    {
        remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }
    return binary;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a decimal integer: ");
    scanf("%d", &n);
    printf("binary equivalent: %d",binary(n));
    return 0;
}
