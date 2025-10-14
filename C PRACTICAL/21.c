// Write a program to input a 2×2 matrix and display its transpose.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matrix[2][2],transpose[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("Enter [%d],[%d] element: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("Transpose of the matrix: \n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf(" %d ",transpose[i][j]);
        }
        printf("\n");
    }    
    return 0;
}