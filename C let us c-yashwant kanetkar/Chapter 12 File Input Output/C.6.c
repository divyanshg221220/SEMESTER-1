// Write a program that merges lines alternately from two files and writes the results to new file. If one file has less number of lines than the other, the remaining lines from the larger file should be simply copied into the target file. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr1, *fptr2, *fptr3;
    char fname1[10], fname2[10], fname3[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    printf("Enter file name 3: ");
    scanf("%s", fname3);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "r");
    fptr3 = fopen(fname3, "w");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c1[50], c2[50];
        while (fgets(c1, sizeof(c1), fptr1) != NULL && fgets(c2, sizeof(c2), fptr2) != NULL)
        {
            fputs(c1, fptr3);
            fputs(c2, fptr3);
        }
        while (fgets(c1, sizeof(c1), fptr1) != NULL)
        {
            fputs(c1, fptr3);
        }
        while (fgets(c2, sizeof(c2), fptr2) != NULL)
        {
            fputs(c2, fptr3);
        }
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
    return 0;
}