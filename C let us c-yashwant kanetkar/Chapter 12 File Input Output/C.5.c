// Write a program to copy one file to another. While doing so replace all lowercase characters to their equivalent uppercase characters.
#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    FILE *fptr1, *fptr2;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "w");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        while ((c = fgetc(fptr1)) != EOF)
        {
            fputc(toupper(c), fptr2);
            
        }
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}