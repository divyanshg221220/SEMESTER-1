// Twenty-five numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[25], n, count = 0;
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched:\n");
    scanf("%d", &n);
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("present %d times\n", count);
    }
    else
    {
        printf("not present\n");
    }
    return 0;
}