// A hospital keeps a file of blood donors in which each record has the format: 
// Name: 20 Columns 
// Address: 40 Columns
// Age: 2 Columns 
// Blood Type: 1 Column (Type 1, 2, 3 or 4) 
// Write a program to read the file and print a list of all blood donors whose age is below 25 and blood is type 2. 
#include <stdio.h>
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
        char name[20], address[40];
        int age, blood_type;
        while (fscanf(fptr, "%s %s %d %d", name, address, &age, &blood_type) != EOF)
        {
            if (age < 25 && blood_type == 2)
            {
                printf("%s %s %d %d\n", name, address, age, blood_type);
            }
        }
        fclose(fptr);
    }
    return 0;
}