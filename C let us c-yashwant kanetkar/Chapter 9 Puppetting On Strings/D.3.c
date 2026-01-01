// Write a program that converts all lowercase characters in a given string to its equivalent uppercase character. 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strupr(str);
    printf("uppercase: ");
    puts(str);
    return 0;
}