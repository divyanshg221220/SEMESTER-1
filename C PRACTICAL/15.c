// Write a program to print the first n terms of the Fibonacci series using a loop.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,b=1,n;
    printf("Enter number of terms of the Fibonacci series : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("%d\n",a);
        int temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}