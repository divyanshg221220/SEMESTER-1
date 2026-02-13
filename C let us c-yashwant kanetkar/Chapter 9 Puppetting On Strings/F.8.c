// Write a program to delete all vowels from a sentence. Assume that the sentence is not more than 80 characters long.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char sentence[81];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
            for (int j = i; j < strlen(sentence); j++)
            {
                sentence[j] = sentence[j + 1];
            }
            i--;
        }
    }
    printf("sentence: %s", sentence);
    return 0;
}
