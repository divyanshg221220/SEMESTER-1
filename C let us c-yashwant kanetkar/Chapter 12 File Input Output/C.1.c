// Write a program to read a file and display contents with its line numbers. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
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
        int i = 1;
        char c;
        while ((c = fgetc(fptr)) != EOF)
        {
            if (i == 1 || c == '\n')
            {
                if (c == '\n')
                {
                    printf("\n");
                }
                printf("%d. ", i);
                i++;
            }
            else
            {
                printf("%c", c);
            }
        }
        fclose(fptr);
    }
    return 0;
}