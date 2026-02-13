// Write a program to count the number of occurrences of any two vowels in succession in a line of text. For example, in the sentence 
// “Pleases read this application and give me gratuity” 
// such occurrences are ea, ea, ui.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int count = 0;
    printf("Enter a line: ");
    scanf("%[^\n]", str);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') && (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u'))
        {
            count++;
        }
    }
    printf("number of occurrences of any two vowels in succession: %d", count);
    return 0;
}
