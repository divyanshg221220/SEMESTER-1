// In a small firm employee numbers are given in serial numerical order, that is 1, 2, 3, etc. 
// − Create a file of employee data with following information: employee number, name, sex, gross salary. 
// − If more employees join, append their data to the file. 
// − If an employee with serial number 25 (say) leaves, delete the record by making gross salary 0. 
// − If some employee’s gross salary increases, retrieve the record and update the salary.  
// Write a program to implement the above operations. 
#include <stdio.h>
int main()
{
    int choice;
    char fname[10];
    printf("Enter file name: ");
    scanf("%s", fname);
    do
    {
        printf("1. Create a file of employee data with following information: employee number, name, sex, gross salary. \n");
        printf("2. If more employees join, append their data to the file. \n");
        printf("3. If an employee with serial number 25 (say) leaves, delete the record by making gross salary 0. \n");
        printf("4. If some employee’s gross salary increases, retrieve the record and update the salary. \n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            {
                FILE *fptr;
                fptr = fopen(fname, "w");
                if (fptr == NULL)
                {
                    printf("error opening file\n");
                    main();
                }
                else
                {
                    int number;
                    char name[10], sex;
                    float gross_salary;
                    printf("Enter employee number: ");
                    scanf("%d", &number);
                    printf("Enter employee name: ");
                    scanf("%s", name);
                    printf("Enter employee sex: ");
                    scanf(" %c", &sex);
                    printf("Enter employee gross salary: ");
                    scanf("%f", &gross_salary);
                    fprintf(fptr, "%d %s %c %f\n", number, name, sex, gross_salary);
                    fclose(fptr);
                }
                break;
            }
        case 2:
            {
                FILE *fptr;
                fptr = fopen(fname, "a");
                if (fptr == NULL)
                {
                    printf("error opening file\n");
                    main();
                }
                else
                {
                    int n;
                    printf("Enter number of employees: ");
                    scanf("%d", &n);
                    for (int i = 0; i < n; i++)
                    {
                        int number;
                        char name[10], sex;
                        float gross_salary;
                        printf("Enter employee number [%d]: ", i + 1);
                        scanf("%d", &number);
                        printf("Enter employee name [%d]: ", i + 1);
                        scanf("%s", name);
                        printf("Enter employee sex [%d]: ", i + 1);
                        scanf(" %c", &sex);
                        printf("Enter employee gross salary [%d]: ", i + 1);
                        scanf("%f", &gross_salary);
                        fprintf(fptr, "%d %s %c %f\n", number, name, sex, gross_salary);
                    }
                    fclose(fptr);
                }
                break;
            }
        case 3:
            {
                FILE *fptr1, *fptr2;
                fptr1 = fopen(fname, "r");
                fptr2 = fopen("temp.txt", "w");
                if (fptr1 == NULL || fptr2 == NULL)
                {
                    printf("error opening file\n");
                    main();
                }
                else
                {
                    int number, n;
                    char name[10], sex;
                    float gross_salary;
                    printf("Enter employee number: ");
                    scanf("%d", &n);
                    while (fscanf(fptr1, "%d %s %c %f\n", &number, name, &sex, &gross_salary) != EOF)
                    {
                        if (number == n)
                        {
                            fprintf(fptr2, "%d %s %c %f\n", number, name, sex, 0.0);
                        }
                        else
                        {
                            fprintf(fptr2, "%d %s %c %f\n", number, name, sex, gross_salary);
                        }
                    }
                    fclose(fptr1);
                    fclose(fptr2);
                    remove(fname);
                    rename("temp.txt", fname);
                }
                break;
            }
        case 4:
            {
                FILE *fptr1, *fptr2;
                fptr1 = fopen(fname, "r");
                fptr2 = fopen("temp.txt", "w");
                if (fptr1 == NULL || fptr2 == NULL)
                {
                    printf("error opening file\n");
                    main();
                }
                else
                {
                    int number, n;
                    char name[10], sex;
                    float gross_salary, new_gross_salary;
                    printf("Enter employee number: ");
                    scanf("%d", &n);
                    while (fscanf(fptr1, "%d %s %c %f\n", &number, name, &sex, &gross_salary) != EOF)
                    {
                        if (number == n)
                        {
                            printf("Enter new gross salary: ");
                            scanf("%f", &new_gross_salary);
                            fprintf(fptr2, "%d %s %c %f\n", number, name, sex, new_gross_salary);
                        }
                        else
                        {
                            fprintf(fptr2, "%d %s %c %f\n", number, name, sex, gross_salary);
                        }
                    }
                    fclose(fptr1);
                    fclose(fptr2);
                    remove(fname);
                    rename("temp.txt", fname);
                }
                break;
            }
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 5);
    return 0;
}