// Write a program which performs the following tasks: 
// − initialize an integer array of 10 elements in main( ) 
// − pass the entire array to a function modify( ) 
// − in modify( ) multiply each element of array by 3 
// − return the control to main( ) and print the new array elements in main( )
#include <stdio.h>
void modify(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] * 3;
    }
}
int main( )
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    modify(arr);
    printf("new array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}