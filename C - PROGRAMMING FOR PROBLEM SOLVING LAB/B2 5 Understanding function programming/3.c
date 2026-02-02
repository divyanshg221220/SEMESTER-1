// Write a function to swap two numbers using call by value and call by reference.
#include <stdio.h>
void swapByValue(int a,int b);
void swapByReference(int *a,int *b);
int main(int argc, char const *argv[])
{
    int q,a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("1. Call by Value\n2. Call by Reference\nEnter your choice: ");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        swapByValue(a,b);
        break;
    case 2:
        swapByReference(&a,&b);
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
void swapByValue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("First number: %d\nSecond number: %d",a,b);

}
void swapByReference(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("First number: %d\nSecond number: %d",*a,*b);
}