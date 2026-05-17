// Write a program that interchanges the odd and even elements of an array.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n], temp;
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}