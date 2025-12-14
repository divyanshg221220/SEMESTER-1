// Write a program to fill the entire screen with diamond and heart alternatively. The ASCII value for heart is 3 and that of diamond is 4.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 1080; i++)
    {
        printf("%c", 3);
        printf("%c", 4);
    }
    return 0;
}