// Write a program to read a file and display contents with its line numbers. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname;
    printf("Enter file name: ");
    scanf("%s", &fname);
    fptr = fopen(&fname, "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        while ((c = fgetc(fptr)) != EOF)
        {
            printf("%c", c);
        }
        fclose(fptr);
    }
    return 0;
}