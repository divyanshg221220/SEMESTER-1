// Write a program to check whether contents of the two files are same by comparing them on a byte-by-byte basis.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *fptr1, *fptr2;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "rb");
    fptr2 = fopen(fname2, "rb");
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c1, c2;
        int flag = 0;
        while ((c1 = fgetc(fptr1)) != EOF && (c2 = fgetc(fptr2)) != EOF)
        {
            if (c1 != c2)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("files are same");
        }
        else
        {
            printf("files are different");
        }
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}