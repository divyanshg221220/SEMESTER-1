// Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[4][25];
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            printf("Enter first name: ");
        }
        else if (i == 1)
        {
            printf("Enter middle name: ");
        }
        else if (i == 2)
        {
            printf("Enter other name: ");
        }
        else
        {
            printf("Enter last name: ");
        }
        scanf("%s", name[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c. ", name[i][0]);
    }
    printf("%s", name[3]);
    return 0;
}