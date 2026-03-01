// Find the smallest number in an array using pointers. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10], *ptr, smallest;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    smallest = *ptr;
    for (ptr = arr + 1; ptr < arr + 10; ptr++)
    {
        if (*ptr < smallest)
        {
            smallest = *ptr;
        }
    }    
    printf("smallest: %d\n", smallest);
    return 0;
}