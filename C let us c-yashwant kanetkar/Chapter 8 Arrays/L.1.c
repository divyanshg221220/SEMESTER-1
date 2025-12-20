// How will you initialize a three-dimensional array threed[3][2][3]? How will you refer the first and last element in this array?
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int threed[3][2][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &threed[i][j][k]);
            }
        }
    }
    printf("First element: %d\n", threed[0][0][0]);
    printf("Last element: %d\n", threed[2][1][2]);
    return 0;
}