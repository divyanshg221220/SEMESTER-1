// There are five players from which the Most Valuable Player (MVP) is to be chosen. Each player is to be judged by 3 judges, who would assign a rank to each player. The player whose sum of ranks is highest is chosen as MVP. Write a program to implement this scheme. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rank[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter rank of player %d judge %d: ", i + 1, j + 1);
            scanf("%d", &rank[i][j]);
        }
    }
    int sum[5];
    for (int i = 0; i < 5; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            sum[i] += rank[i][j];
        }
    }
    int max = sum[0], index = 0;
    for (int i = 1; i < 5; i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
            index = i;
        }
    }
    printf("MVP is player %d\n", index + 1);
    return 0;
}