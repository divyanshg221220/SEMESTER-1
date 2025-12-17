// Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[25], p = 0, n = 0, e = 0, o = 0;
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else if (arr[i] < 0)
        {
            n++;
        }
        if (arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("positive numbers: %d\n", p);
    printf("negative numbers: %d\n", n);
    printf("even numbers: %d\n", e);
    printf("odd numbers: %d\n", o);
    return 0;
}
