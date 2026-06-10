// Create an array of pointers containing names of 10 cities. Write a program that sorts the cities in reverse alphabetical order and prints this reversed list. 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char cities[10][25];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of city %d: ", i + 1);
        scanf("%s", cities[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(cities[i], cities[j]) < 0)
            {
                char temp[25];
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", cities[i]);
    }
    return 0;
}