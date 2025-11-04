// Program for Writing to and reading from a file
#include <stdio.h>
int write(char filename[100])
{
    FILE *fptr;
    fptr=fopen(filename,"w");
    if (fptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char text[100];
    printf("Enter text to write to file: ");
    scanf("%s",text);
    fputs(text,fptr);
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
    char text[100];
    printf("Text of the file: ");
    while (fgets(text,100,fptr)!=NULL)
    {
        printf("%s",text);
    }
    fclose(fptr);
    return 0;
}
int main(int argc, char const *argv[])
{
    char filename[100];
    int q;
    printf("Enter the file location to: ");
    scanf("%s",filename);
    printf("1. Write to file\n");
    printf("2. Read from file\n");
    printf("Enter your choice: ");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        write(filename);
        break;
    case 2:
        read(filename);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}