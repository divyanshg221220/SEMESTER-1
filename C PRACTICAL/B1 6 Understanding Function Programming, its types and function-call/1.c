// Write a program to print the first n terms of the Fibonacci series using recursion.
#include <stdio.h>
void fibonacci(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a=0,b=1,c;
    printf("Fibonacci Series: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}