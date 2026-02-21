// Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol. 
// The following table shows the range of ASCII values for various characters: 
// Characters          ASCII Values 
// A – Z               65 – 90 
// a – z               97 – 122 
// 0 – 9               48 – 57 
// special symbols     0 - 47, 58 - 64, 91 - 96, 123 - 127
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
        printf("capital letter\n");
    else if (c >= 97 && c <= 122)
        printf("small case letter\n");
    else if (c >= 48 && c <= 57)
        printf("digit\n");
    else
        printf("special symbols\n");
    return 0;
}