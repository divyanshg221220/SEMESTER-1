// Given a list of names of students in a class, write a program to store the names in a file on disk. Make a provision to display the nth name in the list (n is data to be read) and to display all names starting with S. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    fptr = fopen(fname, "w+");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        int n;
        char name[10];
        printf("Enter number of students: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter name of student %d: ", i + 1);
            scanf("%s", name);
            fprintf(fptr, "%s\n", name);
        }
        fseek(fptr, 0, SEEK_SET);
        int nth;
        printf("Enter nth name to display: ");
        scanf("%d", &nth);
        for (int i = 1; i <= nth; i++)
        {
            fscanf(fptr, "%s", name);
            if (i == nth)
            {
                printf("name of nth student: %s\n", name);
            }
        }
        fseek(fptr, 0, SEEK_SET);
        printf("name strating with S:\n");
        for (int i = 0; i < n; i++)
        {
            fscanf(fptr, "%s", name);
            if (name[0] == 'S')
            {
                printf("%s\n", name);
            }
        }
        fclose(fptr);
    }
    return 0;
} 