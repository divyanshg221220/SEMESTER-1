// Using Conditional (Terenary) Operator -
// i. Write a program to check whether a number is even or odd
// ii. Write a program to check whether a character is uppercase or lowercase
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q;
    printf("Using Conditional (Terenary) Operator\n");
    printf("1. Check whether a number is even or odd\n");
    printf("2. Check whether a character is uppercase or lowercase\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if (q==1)
    {
        int n;
        printf("Enter a number : ");
        scanf("%d",&n);
        (n%2==0)?printf("%d is even",n):printf("%d is odd",n);
    }
    else if (q==2)
    {
        char c;
        printf("Enter a character : ");
        scanf(" %c",&c);
        (c>='A' && c<='z')?printf((c>='A' && c<='Z')?printf("%c is uppercase",c):printf("%c is lowercase",c)):printf("%c is not an alphabet",c);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
