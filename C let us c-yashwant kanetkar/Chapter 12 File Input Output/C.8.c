// Write a program to encrypt/decrypt a file using:
// (1) An offset cipher: In an offset cipher each character from the source file is offset with a fixed value and then written to the target file. 
// For example, if character read from the source file is ‘A’, then convert this into a new character by offsetting ‘A’ by a fixed value, say 128, and then writing the new character to the target file. 
// (2) A substitution cipher: In this each character read from the source file is substituted by a corresponding predetermined character and this character is written to the target file. 
// For example, if character ‘A’ is read from the source file, and if we have decided that every ‘A’ is to be substituted by ‘!’, then a ‘!’ would be written to the target file in place of every ‘A’ Similarly, every ‘B’ would be substituted by ‘5’ and so on. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encrypt_offset_cipher()
{
    FILE *fptr1, *fptr2, *fptr3;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "w");
    fptr3 = fopen("key.txt", "w");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        int offset;
        printf("Enter offset: ");
        scanf("%d", &offset);
        while ((c = fgetc(fptr1)) != EOF)
        {
            fputc(c + offset, fptr2);
        }
        fprintf(fptr3, "%d", offset);
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
}
void decrypt_offset_cipher()
{
    FILE *fptr1, *fptr2, *fptr3;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "w");
    fptr3 = fopen("key.txt", "r");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        int offset;
        fscanf(fptr3, "%d", &offset);
        while ((c = fgetc(fptr1)) != EOF)
        {
            fputc(c - offset, fptr2);
        }
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
}
void encrypt_substitution_cipher()
{
    FILE *fptr1, *fptr2, *fptr3;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "w");
    fptr3 = fopen("key.txt", "w");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        char key1[27], key2[27];
        printf("Enter key1: ");
        scanf("%s", key1);
        printf("Enter key2: ");
        scanf("%s", key2);
        while ((c = fgetc(fptr1)) != EOF)
        {
            if (c >= 'A' && c <= 'Z')
            {
                fputc(key1[c - 'A'], fptr2);
            }
            else if (c >= 'a' && c <= 'z')
            {
                fputc(key2[c - 'a'], fptr2);
            }
            else
            {
                fputc(c, fptr2);
            }
        }
        fprintf(fptr3, "%s %s", key1, key2);
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
}
void decrypt_substitution_cipher()
{
    FILE *fptr1, *fptr2, *fptr3;
    char fname1[10], fname2[10];
    printf("Enter file name 1: ");
    scanf("%s", fname1);
    printf("Enter file name 2: ");
    scanf("%s", fname2);
    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "w");
    fptr3 = fopen("key.txt", "r");
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
    {
        printf("error opening file");
    }
    else
    {
        char c;
        char key1[27], key2[27];
        fscanf(fptr3, "%s %s", key1, key2);
        while ((c = fgetc(fptr1)) != EOF)
        {
            if (c >= 'A' && c <= 'Z')
            {
                for (int i = 0; i < 26; i++)
                {
                    if (key1[i] == c)
                    {
                        fputc('A' + i, fptr2);
                        break;
                    }
                }
            }
            else if (c >= 'a' && c <= 'z')
            {
                for (int i = 0; i < 26; i++)
                {
                    if (key2[i] == c)
                    {
                        fputc('a' + i, fptr2);
                        break;
                    }
                }
            }
            else
            {
                fputc(c, fptr2);
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
    }
}
int main(int argc, char const *argv[])
{
    int choice1, choice2;
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d", &choice1);
    printf("1. An offset cipher\n");
    printf("2. A substitution cipher\n");
    printf("Enter your choice: ");
    scanf("%d", &choice2);
    switch (choice1)
    {
    case 1:
        switch (choice2)
        {
        case 1:
            encrypt_offset_cipher();
            break;
        case 2:
            encrypt_substitution_cipher();
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
        break;
    case 2:
        switch (choice2)
        {
        case 1:
            decrypt_offset_cipher();
            break;
        case 2:
            decrypt_substitution_cipher();
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}