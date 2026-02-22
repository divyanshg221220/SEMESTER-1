// Write a program to produce the following output:
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 7; i++)
    {
        for (char c = 'A'; c <= 'G' - i; c++)
        {   
            if (c == 'G')
            {
                continue;
            }
            printf("%c ", c);
        }
        if (i == 0)
        {
            printf("G ");
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("  ");
            }
        }
        for (char c = 'G' - i; c >= 'A'; c--)
        {
            if (c == 'G')
            {
                continue;
            }
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}
