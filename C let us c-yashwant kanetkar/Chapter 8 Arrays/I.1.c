// Write a program to copy the contents of one array into another in the reverse order.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr1[10], arr2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr1[9 - i];
    }
    printf("reverse order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}