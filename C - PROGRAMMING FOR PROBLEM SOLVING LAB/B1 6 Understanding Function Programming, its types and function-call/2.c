// Write a program to read an integer number and print the reverse of that number.
#include <stdio.h>
void reverse(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    printf("Reverse: ");
    while (n!=0)
    {
        printf("%d",n%10);
        n=n/10;
    }
}