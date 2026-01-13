// Write a program to read a list of words, sort the words in alphabetical order and display them one word per line. Also give the total number of words in the list. Output format should be: 
// Total Number of words in the list is _______ 
// Alphabetical listing of words is: 
// ------
// ------
// ------ 
// Assume the end of the list is indicated by ZZZZZZ and there are maximum in 25 words in the Text file.  
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    int i = 0;
    char words[25][10];
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        while (fscanf(fptr, "%s", words[i]) != EOF)
        {
            if (strcmp(words[i], "ZZZZZZ") == 0)
            {
                break;
            }
            i++;
        }
        printf("Total Number of words in the list is %d\n", i);
        printf("Alphabetical listing of words is:\n");
        for (int j = 0; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                if (strcmp(words[j], words[k]) > 0)
                {
                    char temp[25];
                    strcpy(temp, words[j]);
                    strcpy(words[j], words[k]);
                    strcpy(words[k], temp);
                }
            }
            printf("%s\n", words[j]);
        }
        fclose(fptr);
    }
    return 0;
}