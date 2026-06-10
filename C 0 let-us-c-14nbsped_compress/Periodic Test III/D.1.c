// Write a function that receives as parameters, a 1D array, its size and an integer and returns number of times the integer occurs in the array. 
#include <stdio.h>
int count(int arr[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the number to count: ");
    scanf("%d", &num);
    printf("count: %d", count(arr, size, num));
    return 0;
}
