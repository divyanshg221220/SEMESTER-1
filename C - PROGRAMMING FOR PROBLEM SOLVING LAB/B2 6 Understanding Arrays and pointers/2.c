// Write a C program to print the square of array element
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
    printf("Square of array element: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",array[i]*array[i]);
    }
    return 0;
}