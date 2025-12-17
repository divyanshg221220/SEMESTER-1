// Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n%2!=0)
    {
        printf("odd: %d\n", n);
    }
    else
    {
        printf("even: %d\n", n);
    }
    return 0;
}
