// Very often in fairs we come across a puzzle that contains 15 numbered square pieces mounted on a frame. These pieces can be moved horizontally or vertically. A possible arrangement of these pieces is shown below: 
// 1 4 15 7  
// 8 10 2 11  
// 14 3 6 13  
// 12 9 5     
// Figure 8.12 
// As you can see there is a blank at bottom right corner. Implement the following procedure through a program:
// Draw the boxes as shown above. Display the numbers in the above order. Allow the user to hit any of the arrow keys (up, down, left, or right). 
// If user hits say, right arrow key then the piece with a number 5 should move to the right and blank should replace the original position of 5. Similarly, if down arrow key is hit, then 13 should move down and blank should replace the original position of 13. If left arrow key or up arrow key is hit then no action should be taken. 
// The user would continue hitting the arrow keys till the numbers aren’t arranged in ascending order. 
// Keep track of the number of moves in which the user manages to arrange the numbers in ascending order. The user who manages it in minimum number of moves is the one who wins. 
// How do we tackle the arrow keys? We cannot receive them using scanf( ) function. Arrow keys are special keys which are identified by their ‘scan codes’. Use the following function in your program. It would return the scan code of the arrow key being hit. Don’t worry about how this function is written. We are going to deal with it later. The scan codes for the arrow keys are: 
// up arrow key – 72 down arrow key – 80 
// left arrow key – 75 right arrow key – 77 
// /* Returns scan code of the key that has been hit */ 
// #include "dos.h" 
// getkey( ) 
// { 
//     union REGS i, o ; 
//     while ( !kbhit( ) ) 
//     ; 
//     i.h.ah = 0 ; 
//     int86 ( 22, &i, &o ) ; 
//     return ( o.h.ah ) ; 
// } 
#include <windows.h> 
void gotoxy ( short col, short row )
{ 
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE ) ; 
    COORD position = { col, row } ; 
    SetConsoleCursorPosition ( h, position ) ; 
}
# include <conio.h> 
int getkey( ) 
{ 
    int ch ; 
    ch = getch( ) ; 
    if ( ch == 0 ) 
    { 
        ch = getch( ) ; 
        return ch ; 
    } 
    return ch ; 
}
#include <stdio.h>
#include <stdlib.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
void displayBoard(int board[4][4])
{
    gotoxy(0, 0);
    printf("\nPRESS ESC TO EXIT\n");
    printf("+----+----+----+----+\n");
    for (int i = 0; i < 4; i++)
    {
        printf("|");
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j] == 0)
            {
                printf("    ");
            }
            else
            {
                printf(" %2d ", board[i][j]);
            }
            printf("|");
        }
        printf("\n");
        printf("+----+----+----+----+\n");
    }
}
int checkWin(int board[4][4])
{
    int winBoard[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j] != winBoard[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
void showCursor(void)
{
    CONSOLE_CURSOR_INFO cci = {1, TRUE};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
void hideCursor(void)
{
    CONSOLE_CURSOR_INFO cci = {1, FALSE};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
int main(int argc, char const *argv[])
{
    hideCursor();
    int board[4][4] = {{1, 4, 15, 7}, {8, 10, 2, 11}, {14, 3, 6, 13}, {12, 9, 5, 0}};
    int moves = 0;
    displayBoard(board);
    printf("Moves: %d", moves);
    while (!checkWin(board))
    {
        int key = getkey();
        int b = 0;
        switch (key)
        {
        case 27:
            printf("\nEXITED BY USER\n");
            exit(0);
        case UP:
            for (int i = 0; i < 4; i++)
            {
                if (b == 1)
                {
                    break;
                }
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 0)
                    {
                        if (i > 0)
                        {
                            moves++;
                            board[i][j] = board[i-1][j];
                            board[i-1][j] = 0;
                            b = 1;
                            break;
                        }
                    }
                }
            }
            break;
        case DOWN:
            for (int i = 0; i < 4; i++)
            {
                if (b == 1)
                {
                    break;
                }
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 0)
                    {
                        if (i < 3)
                        {
                            moves++;
                            board[i][j] = board[i+1][j];
                            board[i+1][j] = 0;
                            b = 1;
                            break;
                        }
                    }
                }
            }
            break;
        case LEFT:
            for (int i = 0; i < 4; i++)
            {
                if (b == 1)
                {
                    break;
                }
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 0)
                    {
                        if (j > 0)
                        {
                            moves++;
                            board[i][j] = board[i][j-1];
                            board[i][j-1] = 0;
                            b = 1;
                            break;
                        }
                    }
                }
            }
            break;
        case RIGHT:
            for (int i = 0; i < 4; i++)
            {
                if (b == 1)
                {
                    break;
                }
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 0)
                    {
                        if (j < 3)
                        {
                            moves++;
                            board[i][j] = board[i][j+1];
                            board[i][j+1] = 0;
                            b = 1;
                            break;
                        }
                    }
                }
            }
            break;
        }
        if (b == 1)
        {
            displayBoard(board);
            printf("Moves: %d", moves);
        }
    }
    displayBoard(board);
    printf("\nCONGRATULATIONS! YOU SOLVED THE PUZZLE IN %d MOVES.\n", moves);
    showCursor();
    return 0;
}