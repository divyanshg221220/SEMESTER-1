// Write a C program to read a large text file ‘NOTES.TXT’ and print it on the printer in cut-sheets, introducing page breaks at the end of every 50 lines and a pause message on the screen at the end of every page for the user to change the paper.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("NOTES.TXT", "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        int i = 0;
        char c[100];
        while (fgets(c, sizeof(c), fptr) != NULL)
        {
            printf("%s", c);
            i++;
            if (i == 50)
            {
                printf("\f");
                printf("\nPress any key...\n");
                getchar();
                i = 0;
            }
        }
        fclose(fptr);
    }
    return 0;
}