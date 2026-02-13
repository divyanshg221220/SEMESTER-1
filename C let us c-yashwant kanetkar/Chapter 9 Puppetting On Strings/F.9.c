// Write a program that will read a line and delete from it all occurrences of the word ‘the’.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char line[25];
    printf("Enter a line: ");
    scanf("%[^\n]", line);
    char temp[25];
    char *word = strtok(line, " ");
    strcpy(temp, "");
    while (word != NULL)
    {
        if (strcmp(word, "the") != 0)
        {
            strcat(temp, word);
            strcat(temp, " ");
        }
        word = strtok(NULL, " ");
    }
    strcpy(line, temp);
    printf("line: %s", line);
    return 0;
}