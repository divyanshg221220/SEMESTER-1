// A 6 x 6 matrix is entered through the keyboard. Write a program to obtain the Determinant value of this matrix. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int determinant = 0;
    for (int i = 0; i < 6; i++)
    {
        int sign = (i % 2 == 0) ? 1 : -1;
        int temp = matrix[0][i];
        for (int j = 1; j < 6; j++)
        {
            int k = (j + i) % 6;
            temp *= matrix[j][k];
        }
        determinant += sign * temp;
    }
    printf("determinant: %d\n", determinant);
    return 0;
}