// Write a program that extracts part of the given string from the specified position. For example, if the sting is "Working with strings is fun", then if from position 4, 4 characters are to be extracted then the program should return string as "king". Moreover, if the position from where the string is to be extracted is given and the number of characters to be extracted is 0 then the program should extract entire string from the specified position. 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100], substr[100];
    int pos, n;
    printf("Enter a string: ");
    gets(str);
    printf("Enter position to extract from (0 based index): ");
    scanf("%d", &pos);
    printf("Enter number of characters to extract (0 for all): ");
    scanf("%d", &n);
    if (n == 0)
    {
        strcpy(substr, str + pos);
    }
    else
    {
        strncpy(substr, str + pos, n);
        substr[n] = '\0';
    }
    printf("substring: %s\n", substr);
    return 0;
}