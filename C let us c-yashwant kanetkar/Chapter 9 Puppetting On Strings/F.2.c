// Write a program to sort a set of names stored in an array in alphabetical order.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    char names[n][25];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[25];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("sorted names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}