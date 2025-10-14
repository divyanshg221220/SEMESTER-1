// Write a program in c to read n number of values in an array and display them in reverse order
#include <stdio.h>
int main(int argc, char const *argv[])
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
    printf("Array in reverse order: \n");
    for (int i=n-1;i>=0;i--)
    {
        printf("%d\n",array[i]);
    }
    
    return 0;
}