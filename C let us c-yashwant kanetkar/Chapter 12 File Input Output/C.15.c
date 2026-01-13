// Given a text file, write a program to create another text file deleting the words “a”, “the”, “an” and replacing each one of them with a blank space.
#include <stdio.h>
#include <string.h>
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
        char c[50], *word;
        while (fgets(c, sizeof(c), fptr1) != NULL)
        {
            word = strtok(c, " ");
            while (word != NULL)
            {
                if (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0)
                {
                    fputc(' ', fptr2);
                }
                else
                {
                    fprintf(fptr2, "%s", word);
                }
                word = strtok(NULL, " ");
                if (word != NULL)
                {
                    fputc(' ', fptr2);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}