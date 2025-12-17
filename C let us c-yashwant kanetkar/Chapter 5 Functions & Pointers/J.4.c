// A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number using recursion. 
#include <stdio.h>
void binary(int n)
{
    if (n == 0)
    {
        printf("%d", 0);
        return;
    }
    binary(n / 2);
    printf("%d", n % 2);
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("binary equivalent: ");
    binary(num);
    return 0;
}