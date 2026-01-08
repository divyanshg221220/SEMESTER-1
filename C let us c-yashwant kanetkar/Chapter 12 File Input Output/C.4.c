// Suppose a file contains student’s records with each record containing name and age of a student. Write a program to read these records and display them in sorted order by name.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[10];
    int age;
};
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c[50];
        struct student s[10];
        int i = 0;
        while (fgets(c, sizeof(c), fptr) != NULL)
        {
            sscanf(c, "%s %d", s[i].name, &s[i].age);
            i++;
        }
        for (int j = 0; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {   
                if (strcmp(s[j].name, s[k].name) > 0)
                {
                    struct student temp = s[j];
                    s[j] = s[k];
                    s[k] = temp;
                }
            }
        }
        printf("Name\tAge\n");
        for (int j = 0; j < i; j++)
        {
            printf("%s\t%d\n", s[j].name, s[j].age);
        }
        fclose(fptr);
    }
    return 0;
}