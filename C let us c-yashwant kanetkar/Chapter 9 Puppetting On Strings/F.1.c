// Write a program that uses an array of pointers to strings str[ ]. Receive two strings str1 and str2 and check if str1 is embedded in any of the strings in str[ ]. If str1 is found, then replace it with str2. 
// char *str[ ] = {  
//                     "We will teach you how to...",  
//                     "Move a mountain",  
//                     "Level a building",  
//                     "Erase the past",  
//                     "Make a million",  
//                     "...all through C!"  
//                 };
// For example if str1 contains "mountain" and str2 contains "car", then the second string in str should get changed to "Move a car". 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *str[ ] = {  
                    "We will teach you how to...",  
                    "Move a mountain",  
                    "Level a building",  
                    "Erase the past",  
                    "Make a million",  
                    "...all through C!"  
                   };
    char str1[25], str2[25];
    printf("Enter old string: ");
    scanf("%s", str1);
    printf("Enter new string: ");
    scanf("%s", str2);
    int n_line = sizeof(str) / sizeof(str[0]);
    char temp[n_line][100];
    for (int i = 0; i < n_line; i++)
    {
        char line[100];
        strcpy(line, str[i]);
        char *word = strtok(line, " ");
        strcpy(temp[i], "");
        while (word != NULL)
        {
            if (strcmp(word, str1) == 0)
            {
                strcat(temp[i], str2);
            }
            else
            {
                strcat(temp[i], word);
            }
            strcat(temp[i], " ");
            word = strtok(NULL, " ");
        }
        str[i] = temp[i];
    }
    for (int i = 0; i < n_line; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}