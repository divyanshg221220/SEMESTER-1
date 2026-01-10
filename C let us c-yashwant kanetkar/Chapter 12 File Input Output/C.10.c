// There are 100 records present in a file with the following structure: 
// struct date 
// { 
//     int d, m, y ; 
// } ; 
// struct employee 
// { 
//     int  empcode[6] ; 
//     char empname[20] ; 
//     struct date join_date ; 
//     float salary ; 
// } ; 
// Write a program to read these records, arrange them in ascending order of join_date and write them in to a target file.
#include <stdio.h>
struct date
{
    int d, m, y ;
} ;
struct employee
{    
    int empcode[6] ;
    char empname[20] ;
    struct date join_date ;
    float salary ;
} ;
int main(int argc, char const *argv[])
{
    struct employee e[100];
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    FILE *fptr;
    fptr = fopen(fname, "r+");
    if (fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {
            fscanf(fptr, "%1d%1d%1d%1d%1d%1d %s %2d%2d%4d %f", &e[i].empcode[0], &e[i].empcode[1], &e[i].empcode[2], &e[i].empcode[3], &e[i].empcode[4], &e[i].empcode[5], e[i].empname, &e[i].join_date.d, &e[i].join_date.m, &e[i].join_date.y, &e[i].salary);
        }
        for (int i = 0; i < 100; i++)
        {
            for (int j = i + 1; j < 100; j++)
            {
                if (e[i].join_date.y > e[j].join_date.y)
                {
                    struct employee temp = e[i];
                    e[i] = e[j];
                    e[j] = temp;
                }
                else if (e[i].join_date.y == e[j].join_date.y)
                {
                    if (e[i].join_date.m > e[j].join_date.m)
                    {
                        struct employee temp = e[i];
                        e[i] = e[j];
                        e[j] = temp;
                    }
                    else if (e[i].join_date.m == e[j].join_date.m)
                    {
                        if (e[i].join_date.d > e[j].join_date.d)
                        {
                            struct employee temp = e[i];
                            e[i] = e[j];
                            e[j] = temp;
                        }
                    }
                }
            }
        }
        fseek(fptr, 0, SEEK_SET);
        for (int i = 0; i < 100; i++)
        {
            fprintf(fptr, "%1d%1d%1d%1d%1d%1d %s %2d%2d%4d %f\n", e[i].empcode[0], e[i].empcode[1], e[i].empcode[2], e[i].empcode[3], e[i].empcode[4], e[i].empcode[5], e[i].empname, e[i].join_date.d, e[i].join_date.m, e[i].join_date.y, e[i].salary);
            fflush(fptr);
        }
        fclose(fptr);
    }
    return 0;
}