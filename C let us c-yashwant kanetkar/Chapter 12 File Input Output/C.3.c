// Write a program to add the contents of one file at the end of another.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr1, *fptr2;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", &fname1);
    printf("Enter file name 2: ");
    scanf("%s", &fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "a");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        while ((c = fgetc(fptr1)) != EOF)
        {
            fputc(c, fptr2);
        }
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}
