// Write a program that replaces two or more consecutive blanks in a string by a single blank. For example, if the input is 
// Grim      return        to   the        planet       of               apes!! 
// the output should be  
// Grim return to the planet of apes!!
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100], substr[100];
    char *dest = substr;
    printf("Enter a string: ");
    gets(str);
    for (char *src = str; *src != '\0'; src++)
    {
        if (*src == ' ' && *(src + 1) == ' ')
        {
            continue;
        }
        *dest++ = *src;
    }
    *dest = '\0';
    printf("output: %s\n", substr);
    return 0;
}