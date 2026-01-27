// Write a program to carry out the following: 
// (a) Read a text file provided at command prompt 
// (b) Print each word in reverse order 
// For example if the file contains 
// INDIA IS MY COUNTRY 
// Output should be
// AIDNI SI YM YRTNUOC
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
        int i = 0;
        char c[50], *word;
        while (fgets(c, sizeof(c), fptr) != NULL)
        {
            word = strtok(c, " \n");
            while (word != NULL)
            {
                printf("%s", strrev(word));
                word = strtok(NULL, " \n");
                if (word != NULL)
                {
                    printf(" ");
                }
            }
            i++;
        }
        fclose(fptr);
    }
    return 0;
}