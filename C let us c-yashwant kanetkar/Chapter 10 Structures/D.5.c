// There is a structure called employee that holds information like employee code, name, date of joining. Write a program to create an array of the structure and enter some data into it. Then ask the user to enter current date. Display the names of those employees whose tenure is 3 or more than 3 years according to the given current date. 
#include <stdio.h>
struct date_of_joining
{
    int day;
    int month;
    int year;
};
struct employee
{
    int employee_code;
    char name[50];
    struct date_of_joining doj;
};
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee code: ");
        scanf("%d", &e[i].employee_code);
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter date of joining[DDMMYYYY]: ");
        scanf("%2d%2d%4d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
    }
    int current_date, current_month, current_year;
    printf("Enter current date[DDMMYYYY]: ");
    scanf("%2d%2d%4d", &current_date, &current_month, &current_year);
    for (int i = 0; i < n; i++)
    {
        if (current_year - e[i].doj.year >= 3)
        {
            printf("name: %s\n", e[i].name);
        }
    }
    return 0;
}
