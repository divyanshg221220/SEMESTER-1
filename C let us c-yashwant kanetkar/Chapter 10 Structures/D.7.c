// Write a program that compares two given dates. To store date use structure say date that contains three members namely date, month and year. If the dates are equal then display message as "Equal" otherwise "Unequal".
#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
int main(int argc, char const *argv[])
{
    struct date d1, d2;
    printf("Enter date1[DDMMYYYY]: ");
    scanf("%2d%2d%4d", &d1.date, &d1.month, &d1.year);
    printf("Enter date2[DDMMYYYY]: ");
    scanf("%2d%2d%4d", &d2.date, &d2.month, &d2.year);
    if (d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    return 0;
}