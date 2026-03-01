// Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main( ) and print the results in main( ). 
#include <stdio.h>
#include <math.h>
int Sum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
float Average(int arr[])
{
    int sum = Sum(arr);
    float average = sum / 5;
    return average;
}
float StandardDeviation(int arr[])
{
    float average = Average(arr);
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += pow(arr[i] - average, 2) / 5;
    }
    float stddev = sqrt(sum);
    return stddev;
}
int main( )
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("sum: %d\n", Sum(arr));
    printf("average: %.2f\n", Average(arr));
    printf("standard deviation: %.2f\n", StandardDeviation(arr));
    return 0;
}