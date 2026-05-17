// Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[25], pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("positive: %d\n", pos);
    printf("negative: %d\n", neg);
    printf("even: %d\n", even);
    printf("odd: %d\n", odd);
    return 0;
}