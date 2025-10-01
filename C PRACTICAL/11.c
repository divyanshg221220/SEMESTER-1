// Write a program to find the largest of three numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    printf("Largest number is %d", (a>b && a>c)?a:(b>c)?b:c);
    return 0;
}
