// Write a program to find if a square matrix is symmetric. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, isSymmetric = 1;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }
    if (isSymmetric)
    {
        printf("symmetric\n");
    }
    else
    {
        printf("not symmetric\n");
    }
    return 0;
}