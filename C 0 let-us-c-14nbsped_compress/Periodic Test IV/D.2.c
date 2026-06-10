// Write a program to count number of words in a given text file.
#include <stdio.h>
#include <string.h>
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
        char c[80], *word;
        int count = 0;
        while (fgets(c, sizeof(c), fptr) != NULL)
        {
            word = strtok(c, " ,.\n");
            while (word != NULL)
            {
                count++;
                word = strtok(NULL, " ,.\n");
            }
        }
        printf("count: %d\n", count);
        fclose(fptr);
    }
    return 0;
}