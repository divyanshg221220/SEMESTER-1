// Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 2048; i++)
    {
        printf("%c", 1);
    }
    return 0;
}