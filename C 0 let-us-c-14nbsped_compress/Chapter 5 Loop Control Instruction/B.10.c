// Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int list[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    max = min = list[0];
    for (int i = 1; i < n; i++)
    {
        if (list[i] > max)
            max = list[i];
        if (list[i] < min)
            min = list[i];
    }
    printf("range: %d\n", max - min);
    return 0;
}