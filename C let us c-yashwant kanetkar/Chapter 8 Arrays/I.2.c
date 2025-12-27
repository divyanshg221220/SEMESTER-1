// If an array arr contains n elements, then write a program to check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, isSymmetric = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isSymmetric = 0;
            break;
        }
    }
    if (isSymmetric)
    {
        printf("symmetric\n");
    }
    else
    {
        printf("not symmetric\n");
    }
    return 0;
}