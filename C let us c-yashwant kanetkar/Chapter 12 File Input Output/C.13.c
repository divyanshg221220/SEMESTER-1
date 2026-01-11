// Assume that a Master file contains two fields, Roll no. and name of the student. At the end of the year, a set of students join the class and another set leaves. A Transaction file contains the roll numbers and an appropriate code to add or delete a student. 
// Write a program to create another file that contains the updated list of names and roll numbers. Assume that the Master file and the Transaction file are arranged in ascending order by roll numbers. The updated file should also be in ascending order by roll numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *master_fptr, *transaction_fptr, *fptr;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    master_fptr = fopen("master.txt", "r");
    transaction_fptr = fopen("transaction.txt", "r");
    fptr = fopen(fname, "w");
    if (master_fptr == NULL || transaction_fptr == NULL || fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        int i, j;
        int m_roll_no, t_roll_no;
        char m_name[10], t_name[10];
        char code;
        i = (fscanf(master_fptr, "%d %s", &m_roll_no, m_name) != EOF);
        j = (fscanf(transaction_fptr, "%d %s %c", &t_roll_no, t_name, &code) != EOF);
        while (i || j)
        {
            if (i && j)
            {
                if (m_roll_no < t_roll_no)
                {
                    fprintf(fptr, "%d %s\n", m_roll_no, m_name);
                    fflush(fptr);
                    i = (fscanf(master_fptr, "%d %s", &m_roll_no, m_name) != EOF);
                }
                else if (m_roll_no == t_roll_no)
                {
                    if (code == 'D')
                    {
                        i = (fscanf(master_fptr, "%d %s", &m_roll_no, m_name) != EOF);
                        j = (fscanf(transaction_fptr, "%d %s %c", &t_roll_no, t_name, &code) != EOF);
                    }
                    else if (code == 'A')
                    {
                        fprintf(fptr, "%d %s\n", t_roll_no, t_name);
                        fflush(fptr);
                        i = (fscanf(master_fptr, "%d %s", &m_roll_no, m_name) != EOF);
                        j = (fscanf(transaction_fptr, "%d %s %c", &t_roll_no, t_name, &code) != EOF);
                    }
                }
                else if (m_roll_no > t_roll_no)
                {
                    if (code == 'A')
                    {
                        fprintf(fptr, "%d %s\n", t_roll_no, t_name);
                        fflush(fptr);
                    }
                    j = (fscanf(transaction_fptr, "%d %s %c", &t_roll_no, t_name, &code) != EOF);
                }
            }
            else if (!i)
            {
                if (code == 'A')
                {
                    fprintf(fptr, "%d %s\n", t_roll_no, t_name);
                    fflush(fptr);   
                }
                j = (fscanf(transaction_fptr, "%d %s %c", &t_roll_no, t_name, &code) != EOF);
            }
            else if (!j)
            {
                fprintf(fptr, "%d %s\n", m_roll_no, m_name);
                fflush(fptr);
                i = (fscanf(master_fptr, "%d %s", &m_roll_no, m_name) != EOF);
            }
        }
        fclose(master_fptr);
        fclose(transaction_fptr);
        fclose(fptr);
    }
    return 0;
}