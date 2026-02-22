// Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows: 
// - There are 21 matchsticks. 
// - The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 
// - After the person picks, the computer does its picking. 
// - Whoever is forced to pick up the last matchstick loses the game.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int totalMatchsticks = 21, userPick, computerPick, turn = 1;
    printf("Welcome to the Matchstick Game!\n");
    while (totalMatchsticks > 0)
    {
        printf("There are %d matchsticks left\n", totalMatchsticks);
        printf("Pick 1, 2, 3, 4 matchsticks: ");
        scanf("%d", &userPick);
        if (userPick < 1 || userPick > 4 || userPick > totalMatchsticks)
        {
            printf("Invalid Input\n");
            continue;
        }
        totalMatchsticks -= userPick;
        if (totalMatchsticks < 1)
        {
            printf("you picked the last matchstick. you lose!\n");
            break;
        }
        computerPick = (totalMatchsticks - 1) % 5;
        if (computerPick == 0)
            computerPick = 1;
        totalMatchsticks -= computerPick;
        printf("Computer picks %d matchstick(s)\n", computerPick);
        if (totalMatchsticks < 1)
        {
            printf("computer picked the last matchstick. computer loses!\n");
            break;
        }
    }
    return 0;
}