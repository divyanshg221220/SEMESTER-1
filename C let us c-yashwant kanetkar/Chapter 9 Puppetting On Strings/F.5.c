// Modify the above program suitably so that once the calendar for a particular month and year has been displayed on the screen, then using arrow keys the user must be able to change the calendar in the following manner: 
// Up arrow key    : Next year, same month 
// Down arrow key  : Previous year, same month 
// Right arrow key : Same year, next month 
// Left arrow key  : Same year, previous month 
// If the escape key is hit then the procedure should stop. 
// Hint: Use the getkey( ) function discussed in Chapter 8, problem number [L](c).
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
void displayCalendar(int month, int year)
{
    gotoxy(0, 0);
    printf("\nPRESS ESC TO EXIT\n");
    int totalDays = 0;
    printf("+--------------------------------+\n");
    printf("| +----------------------------+ |\n");
    printf("| |");
    printf("       ");
    switch (month)
    {
    case 1:
        printf("January %d         | |\n", year);
        break;
    case 2:
        printf("February %d        | |\n", year);
        break;
    case 3:
        printf("March %d           | |\n", year);
        break;
    case 4:
        printf("April %d           | |\n", year);
        break;
    case 5:
        printf("May %d             | |\n", year);
        break;
    case 6:
        printf("June %d            | |\n", year);
        break;
    case 7:
        printf("July %d            | |\n", year);
        break;
    case 8:
        printf("August %d          | |\n", year);
        break;
    case 9:
        printf("September %d       | |\n", year);
        break;
    case 10:
        printf("October %d         | |\n", year);
        break;
    case 11:
        printf("November %d        | |\n", year);
        break;
    case 12:
        printf("December %d        | |\n", year);
        break;
    default:
        printf("Invalid month\n");
        break;
    }
    printf("| |Mon Tue Wed Thu Fri Sat Sun | |\n");
    int daysInMonth[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        daysInMonth[1] = 29;
    }
    else
    {
        daysInMonth[1] = 28;
    }
    if (year >= 1900)
    {
        for (int i = 1900; i < year; i++)
        {
            if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            {
                totalDays += 366;
            }
            else
            {
                totalDays += 365;
            }
        }
    }
    else if (year < 1900)   
    {
        for (int i = year; i < 1900; i++)
        {
            if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            {    
                totalDays -= 366;
            }
            else
            {
                totalDays -= 365;
            }
        }
    }
    for (int i = 0; i < month - 1; i++)
    {
        totalDays += daysInMonth[i];
    }
    int day = totalDays % 7;
    printf("| |");
    for (int i = 0; i < day; i++)
    {
        printf("    ");
    }
    int j = day + 1;
    for (int i = 1; i <= daysInMonth[month - 1]; i++)
    {
        printf(" %2d ", i);
        if (i != daysInMonth[month - 1] && j == 7)
        {
            printf("| |\n| |");
            j = 1;
        }
        else
        {
            j++;
        }
    }
    for (j; j <= 7; j++)
    {
        if (j == 1)
        {
            break;
        }
        printf("    ");
    }
    printf("| |\n");
    printf("| +----------------------------+ |\n");
    printf("+--------------------------------+\n");
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
    int month, year;
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    displayCalendar(month, year);
    while (1)
    {
        int key = getkey();
        switch (key)
        {
        case 27:
            printf("\nEXITED BY USER\n");
            exit(0);
        case UP:
            year++;
            break;
        case DOWN:
            year--;
            break;
        case LEFT:
            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--;
            }
            break;
        case RIGHT:
            if (month == 12)
            {
                month = 1;
                year++;
            }
            else
            {
                month++;
            }
            break;
        }
        displayCalendar(month, year);
    }
    showCursor();
    return 0;
}