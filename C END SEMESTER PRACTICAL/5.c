// Swapping of 2 variables using nd without using 3rd variabe
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First number: %d\n",a);
    printf("Second number: %d",b);
    return 0;
}
