// A 6 x 6 matrix is entered through the keyboard and stored in a 2-dimensional array mat[7][7]. Write a program to obtain the Determinant values of this matrix.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mat[7][7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int det = 0;
    for (int i = 0; i < 6; i++)
    {
        int sign = (i % 2 == 0) ? 1 : -1;
        int temp = mat[0][i];
        for (int j = 1; j < 6; j++)
        {
            int k = (j + i) % 6;
            temp *= mat[j][k];
        }
        det += sign * temp;
    }
    printf("determinant: %d\n", det);
    return 0;
}