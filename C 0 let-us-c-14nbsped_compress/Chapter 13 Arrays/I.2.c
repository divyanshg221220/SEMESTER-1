// If an array arr contains n elements, then write a program to check if arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            printf("not equal\n");
            return 0;
        }
    }
    printf("equal\n");
    return 0;
}