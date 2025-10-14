// Write a C program to find sum of array elements using Pointer as Arguments
#include <stdio.h>
int sumArray(int *arr, int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter [%d] element: ",i);
        scanf("%d",&array[i]);
    }
    int sum=sumArray(array,n);
    printf("Sum of array elements: %d",sum);
    return 0;
}