// Write a program to input 5 numbers into an array and print their sum.
// Write a program to input a 2×2 matrix and display its transpose.
// Write a program in c to read n number of values in an array and display them in reverse order
// Write a C program to print the square of array element
// Write a C program to find sum of array elements using Pointer as Arguments
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5],sum=0;
    for (int i=0;i<5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("Sum: %d",&sum);
    return 0;
}
