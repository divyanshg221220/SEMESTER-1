// Using conditional operators determine: 
// (1) Whether the character entered through the keyboard is a lower case alphabet or not. 
// (2) Whether a character entered through the keyboard is a special symbol or not. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Is it a lowercase alphabet? %s\n", (c >= 'a' && c <= 'z') ? "yes" : "no");
    printf("Is it a special symbol? %s\n", ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) ? "yes" : "no");
    return 0;
}