// Write a program that checks and reports whether sum of elements in the ith row of a 5 x 5 array is equal to sum of elements in ith column. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < 5; j++)
        {
            row_sum += arr[i][j];
            col_sum += arr[j][i];
        }
        if (row_sum == col_sum)
        {
            printf("row %d and column %d have same sum\n", i + 1, i + 1);
        }
        else
        {
            printf("row %d and column %d do not have same sum\n", i + 1, i + 1);
        }
    }
    return 0;
}