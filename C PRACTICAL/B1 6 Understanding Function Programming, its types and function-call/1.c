// Write a program to print the first n terms of the Fibonacci series using recursion.
#include <stdio.h>
void fibonacci(int n,int a,int b,int count);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: \n");
    fibonacci(n,0,1,0);
    return 0;
}
void fibonacci(int n,int a,int b,int count)
{
    if (count==n)
    {
        return;
    }
    printf("%d\n",a);
    fibonacci(n,b,a+b,count+1);
}