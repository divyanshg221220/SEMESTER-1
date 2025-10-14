// Write a program to input 5 numbers into an array and print their sum.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[5],sum=0;
    for (int i=0;i<5;i++)
    {
        printf("Enter [%d] element: ",i);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<5;i++)
    {
        sum+=array[i];
    }
    printf("Sum of array elements: %d",sum);
    return 0;
}