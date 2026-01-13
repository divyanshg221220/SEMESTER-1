// Write a program to carry out the following: 
// − To read a text file “TRIAL.TXT” consisting of a maximum of 50 lines of text, each line with a maximum of 80 characters. 
// − Count and display the number of words contained in the file. 
// − Display the total number of four letter words in the text file. 
// Assume that the end of a word may be a space, comma or a full-stop followed by one or more spaces or a newline character.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("TRIAL.TXT", "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c[80];
        int word_count = 0, four_letter_word_count = 0;
        while (fgets(c, sizeof(c), fptr) != NULL)
        {
            char *word = strtok(c, " ,.\n");
            while (word != NULL)
            {
                word_count++;
                if (strlen(word) == 4)
                {
                    four_letter_word_count++;
                    
                }
                word = strtok(NULL, " ,.\n");
            }
        }
        printf("word_count: %d\n", word_count);
        printf("four_letter_word_count: %d\n", four_letter_word_count);
        fclose(fptr);
    }
    return 0;
}