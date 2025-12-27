// For the following set of sample data, compute the standard deviation and the mean.
// -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2 
// The formula for standard deviation is 
// ((xi - x) ^ 2 / n) ^ (1/2)
// where xi is the data item and x is the mean.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int data[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2}, n = 15;
    float sum = 0, stddev, mean;
    for (int i = 0; i < n; i++)
    {
        sum += data[i];
    }
    mean = sum / n;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(data[i] - mean, 2) / n;
    }
    stddev = sqrt(sum);
    printf("standard deviation: %f\n", stddev);
    printf("mean: %f\n", mean);
    return 0;
}