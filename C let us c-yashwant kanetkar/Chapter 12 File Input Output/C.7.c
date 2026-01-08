// Write a program to display the contents of a text file on the screen. Make following provisions: 
// Display the contents inside a box drawn with opposite corner co-ordinates being ( 0, 1 ) and ( 79, 23 ). Display the name of the file whose contents are being displayed, and the page numbers in the zeroth row. The moment one screenful of file has been displayed, flash a message ‘Press any key...’ in 24th row. When a key is hit, the next page’s contents should be displayed, and so on till the end of file.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void gotoxy ( short col, short row )
{ 
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE ) ; 
    COORD position = { col, row } ; 
    SetConsoleCursorPosition ( h, position ) ; 
}
void drawBox()
{
    int i;
    for (i = 0; i < 80; i++) 
    {
        gotoxy(i, 1); printf("-");
        gotoxy(i, 23); printf("-");
    }
    for (i = 1; i < 24; i++) 
    {
        gotoxy(0, i); printf("|");
        gotoxy(79, i); printf("|");
    }
    gotoxy(0, 1); printf("+");
    gotoxy(79, 1); printf("+");
    gotoxy(0, 23); printf("+");
    gotoxy(79, 23); printf("+");
}
void printHeader(char *fname, int page)
{
    gotoxy(0, 0);
    printf("FileName: %s",fname);
    gotoxy(72, 0);
    printf("Page: %d",page);
}
void printFooter() 
{
    gotoxy(0, 24);
    printf("Press any key...");
}
int main() 
{
    FILE *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        int c;
        int row = 2, col = 2;
        int page = 1;
        system("cls");
        drawBox();
        printHeader(fname, page);
        while ((c = fgetc(fptr)) != EOF)
        {
            if (c == '\n') 
            {
                row++;
                col = 2;
            }
            else 
            {
                gotoxy(col, row);
                printf("%c", c);
                col++;
            }
            if (col >= 78)
            {
                row++;
                col = 2;
            }
            if (row >= 23) 
            {
                printFooter();
                getch();
                page++;
                system("cls");
                drawBox();
                printHeader(fname, page);
                row = 2;
                col = 2;
            }
        }
        gotoxy(0, 24);
        printf("Press any key...");
        getch();
        fclose(fptr);
    }
    return 0;
}