// Given an array p[5], write a function to shift it circularly left by two positions. Thus, if p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 then after the shift p[0] = 28, p[1] = 19, p[2] = 61, p[3] = 15 and p[4] = 30. Call this function for a (4 x 5 ) matrix and get its rows left shifted.
#include <stdio.h>
void circularLeftShift(int p[5])
{
    int temp1 = p[0];
    int temp2 = p[1];
    for (int i = 2; i < 5; i++)
    {
        p[i - 2] = p[i];
    }
    p[3] = temp1;
    p[4] = temp2;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int p[5] = {15, 30, 28, 19, 61};
    printf("array: ");
    circularLeftShift(p);
    int matrix[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("matrix: \n");
    for (int i = 0; i < 4; i++)
    {
        circularLeftShift(matrix[i]);
    }
    return 0;
}