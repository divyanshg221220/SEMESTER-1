// Write a program using pointers to find the smallest number in an array of 25 integers. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[25], *p, min;
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = arr;
    min = *p;
    for (int i = 1; i < 25; i++)
    {
        if (*(p + i) < min)
        {
            min = *(p + i);
        }
    }
    printf("smallest number: %d\n", min);
    return 0;
}