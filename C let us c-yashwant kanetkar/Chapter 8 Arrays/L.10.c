// Write a program that interchanges the odd and even components of an array.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    printf("array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}