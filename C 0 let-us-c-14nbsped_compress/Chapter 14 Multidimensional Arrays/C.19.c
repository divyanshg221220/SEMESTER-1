// Sudoku is a popular number-placement puzzle (refer Figure 14.9). The objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 sub-grids that compose the grid contains all of the digits from 1 to 9. The puzzle setter provides a partially completed grid, which typically has a unique solution. One such solution is given below. Write a program to check whether the solution is correct or not.
// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8
// 1 9 8 3 4 2 5 6 7
// 8 5 9 7 6 1 4 2 3
// 4 2 6 8 5 3 7 9 1
// 7 1 3 9 2 4 8 5 6
// 9 6 1 5 3 7 2 8 4
// 2 8 7 4 1 9 6 3 5
// 3 4 5 2 8 6 1 7 9
// Figure 14.9
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sudoku[9][9];
    printf("Enter sudoku:\n");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &sudoku[i][j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        int row_check[10] = {0}, col_check[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            if (sudoku[i][j] < 1 || sudoku[i][j] > 9 || row_check[sudoku[i][j]] || col_check[sudoku[j][i]])
            {
                printf("not correct\n");
                return 0;
            }
            row_check[sudoku[i][j]] = 1, col_check[sudoku[j][i]] = 1;
        }
    }
    for (int row = 0; row < 9; row += 3)
    {
        for (int col = 0; col < 9; col += 3)
        {
            int subgrid_check[10] = {0};
            for (int i = row; i < row + 3; i++)
            {
                for (int j = col; j < col + 3; j++)
                {
                    if (sudoku[i][j] < 1 || sudoku[i][j] > 9 || subgrid_check[sudoku[i][j]])
                    {
                        printf("not correct\n");
                        return 0;
                    }
                    subgrid_check[sudoku[i][j]] = 1;
                }
            }
        }
    }
    printf("correct\n");
    return 0;
}