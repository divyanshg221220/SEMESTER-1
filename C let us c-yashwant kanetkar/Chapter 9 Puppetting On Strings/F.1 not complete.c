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
    char str1[100], str2[100];
    printf("Enter a old string: ");
    scanf("%s", str1);
    printf("Enter a new string: ");
    scanf("%s", str2);
    char *word;
    while (fgets(, sizeof(c), str) != NULL)
    {
        word = strtok(c, " ");
        while (word != NULL)
        {
            if (strcmp(word, str1) == 0)
            {
                
            }
            
    
    return 0;
}