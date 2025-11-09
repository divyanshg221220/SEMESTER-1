// Program to write characters A to Z into a file and read the file and print the characters in lowercase.
#include <stdio.h>
#include <ctype.h>
int write(char filename[100])
{
    FILE *fptr;
    fptr=fopen(filename,"w");
    if (fptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char text;
    for (int i=65;i<=90;i++)
    {
        fputc(text=i,fptr);
    } 
    fclose(fptr);
    return 0;
}
int read(char filename[100])
{
    FILE *fptr;
    fptr=fopen(filename,"r");
    if (fptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char text;
    while ((text=fgetc(fptr))!=EOF)
    {
        printf("%c",tolower(text));
    }
    fclose(fptr);
    return 0;
}
int main(int argc, char const *argv[])
{
    char filename[100];
    printf("Enter the file location to: ");
    scanf("%s",filename);
    write(filename);
    read(filename);
    return 0;
}