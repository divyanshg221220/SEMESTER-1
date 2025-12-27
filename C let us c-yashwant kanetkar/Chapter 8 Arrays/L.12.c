// Write a function to find the norm of a matrix. The norm is defined as the square root of the sum of squares of all elements in the matrix.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements in a row / column: ");
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j] * matrix[i][j];
        }
    }
    float norm = sqrt(sum);
    printf("norm: %.2f\n", norm);
    return 0;
}