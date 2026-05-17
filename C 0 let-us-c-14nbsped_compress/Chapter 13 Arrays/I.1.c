// Write a program to copy the contents of one array into another in the reverse order.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[n - 1 - i];
    }
    printf("array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}