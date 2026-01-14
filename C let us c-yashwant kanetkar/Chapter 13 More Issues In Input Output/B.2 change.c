// Write a program using command line arguments to search for a word in a file and replace it with the specified word. The usage of the program is shown below. 
// C> change <old word> <new word> <filename>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        printf("error");
        printf("change <old word> <new word> <filename>\n");
        return 0;
    }
    char const *old_word = argv[1];
    char const *new_word = argv[2];
    char const *fname = argv[3];
    FILE *fptr1, *fptr2;
    fptr1 = fopen(fname, "r");
    fptr2 = fopen("temp.txt", "w");
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
                if (strcmp(word, old_word) == 0)
                {
                    fprintf(fptr2, "%s", new_word);
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
        remove(fname);
        rename("temp.txt", fname);
    }
    return 0;
}