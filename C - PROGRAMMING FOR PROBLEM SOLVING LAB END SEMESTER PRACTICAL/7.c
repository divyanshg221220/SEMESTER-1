// Check if char is lowercase or uppercase
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c>='a' && c<='z')
    {
        printf("%c is lowercase",c);
    }
    else if (c>='A' && c<='Z')
    {
        printf("%c is uppercase",c);
    }
    return 0;
}