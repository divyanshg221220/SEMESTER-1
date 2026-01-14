// Those readers who are from an Engineering/Science background may try writing programs for following problems.
// (1) Write a program to add two 6 x 6 matrices.
// (2) Write a program to multiply any two 3 x 3 matrices.
// (3) Write a program to sort all the elements of a 4 x 4 matrix.
// (4) Write a program to obtain the determinant value of a 5 x 5 matrix.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    printf("1. Write a program to add two 6 x 6 matrices.\n");
    printf("2. Write a program to multiply any two 3 x 3 matrices.\n");
    printf("3. Write a program to sort all the elements of a 4 x 4 matrix.\n");
    printf("4. Write a program to obtain the determinant value of a 5 x 5 matrix.\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        {
            int a[6][6], b[6][6], sum[6][6];
            printf("Enter elements of first 6 x 6 matrix:\n");
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of second 6 x 6 matrix:\n");
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            }
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("sum:\n");
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
            break;
        }
    case 2:
        {
            int a[3][3], b[3][3], mul[3][3];
            printf("Enter elements of first 3 x 3 matrix:\n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of second 3 x 3 matrix:\n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    mul[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        mul[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("product:\n");
            for (int i=0;i<3;i++)
            {
                for (int j=0;j<3;j++)
                {
                    printf("%d ",mul[i][j]);
                }
                printf("\n");
            }
            break;
        }
    case 3:
        {
            int matrix[4][4], temp;
            printf("Enter elements of 4 x 4 matrix:\n");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        for (int l = 0; l < 4; l++)
                        {
                            if (matrix[i][j] < matrix[k][l])
                            {
                                temp = matrix[i][j];
                                matrix[i][j] = matrix[k][l];
                                matrix[k][l] = temp;
                            }
                        }
                    }
                }
            }
            printf("sorted matrix:\n");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
            break;
        }
    case 4:
        {
            int matrix[5][5];
            printf("Enter elements of 5 x 5 matrix:\n");
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("Enter element [%d][%d]: ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
            int det = matrix[0][0] * (matrix[1][1] * (matrix[2][2] * (matrix[3][3] * matrix[4][4] - matrix[3][4] * matrix[4][3]) - matrix[2][3] * (matrix[3][1] * matrix[4][4] - matrix[3][4] * matrix[4][1]) + matrix[2][4] * (matrix[3][1] * matrix[4][3] - matrix[3][3] * matrix[4][1])) - matrix[1][2] * (matrix[2][1] * (matrix[3][3] * matrix[4][4] - matrix[3][4] * matrix[4][3]) - matrix[2][3] * (matrix[3][1] * matrix[4][4] - matrix[3][4] * matrix[4][1]) + matrix[2][4] * (matrix[3][1] * matrix[4][3] - matrix[3][3] * matrix[4][1])) + matrix[1][3] * (matrix[2][1] * (matrix[3][2] * matrix[4][4] - matrix[3][4] * matrix[4][2]) - matrix[2][2] * (matrix[3][1] * matrix[4][4] - matrix[3][4] * matrix[4][1]) + matrix[2][4] * (matrix[3][1] * matrix[4][2] - matrix[3][2] * matrix[4][1])) - matrix[1][4] * (matrix[2][1] * (matrix[3][2] * matrix[4][3] - matrix[3][3] * matrix[4][2]) - matrix[2][2] * (matrix[3][1] * matrix[4][3] - matrix[3][3] * matrix[4][1]) + matrix[2][3] * (matrix[3][1] * matrix[4][2] - matrix[3][2] * matrix[4][1])));
            printf("determinant: %d\n", det);
            break;
        }
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}