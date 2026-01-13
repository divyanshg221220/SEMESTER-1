// You are given a data file EMPLOYEE.DAT with the following record structure: 
// struct employee {  
//                     int  empno ; 
//                     char  name[30] ; 
//                     int  basic, grade ; 
//                 }; 
// Every employee has a unique empno and there are supposed to be no gaps between employee numbers. Records are entered into the data file in ascending order of employee number, empno. It is intended to check whether there are missing employee numbers. Write a program segment to read the data file records sequentially and display the list of missing employee numbers.
#include <stdio.h>
struct employee
{
    int empno;
    char name[30];
    int basic, grade;
};
int main(int argc, char const *argv[])
{
    int n;
    struct employee e;
    FILE *fptr;
    fptr = fopen("EMPLOYEE.DAT", "rb");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        fseek(fptr, 0, SEEK_END);
        n = ftell(fptr) / sizeof(e);
        fseek(fptr, 0, SEEK_SET);
        int missing[n];
        int i = 1, j = 0;
        while (fread(&e, sizeof(e), 1, fptr) == 1)
        {
            while (i < e.empno)
            {
                missing[j] = i;
                i++;
                j++;
            }
            printf("Employee number: %d\n", e.empno);
            printf("Name: %s\n", e.name);
            printf("Basic: %d\n", e.basic);
            printf("Grade: %d\n", e.grade);
            i++;
        }
        printf("missing employee numbers:\n");
        for (int k = 0; k < j; k++)
        {
            if (missing[k] != 0)
            {
                printf("%d\n", missing[k]);
            }
        }
        fclose(fptr);
    }
    return 0;
}