// Write a program that interchanges the odd and even elements of an array.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[25], temp;
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (i % 2 == 0)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("array: \n");
    for (int i = 0; i < 25; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}