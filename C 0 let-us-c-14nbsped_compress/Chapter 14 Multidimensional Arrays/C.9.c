// Write a program to add two 6 x 6 matrices.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix1[6][6], matrix2[6][6], result[6][6];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter element [%d][%d] for matrix 1: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter element [%d][%d] for matrix 2: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("result:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}