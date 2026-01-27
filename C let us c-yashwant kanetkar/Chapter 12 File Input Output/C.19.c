// Write a program to carry out the following: 
// (a) Read a text file ‘INPUT.TXT’ 
// (b) Print each word in reverse order 
// Example, 
// Input: INDIA IS MY COUNTRY 
// Output: AIDNI SI YM YRTNUOC 
// Assume that each word length is maximum of 10 characters and each word is separated by newline/blank characters. 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("INPUT.TXT", "r");
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