// Write a program to pick up the largest number from any 5 row by 5 column matrix.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int largest = matrix[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }
    printf("Largest: %d\n", largest);
    return 0;
}