// Write a program to find the size of a text file without traversing it character by character.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", &fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        fseek(fptr, 0, SEEK_END);
        int size = ftell(fptr);
        printf("size: %d",size);
        fclose(fptr);
    }
    return 0;
}