// Write a function that compares two given dates. To store a date use a structure that contains three members namely day, month and year. If the dates are equal the function should return 0, otherwise it should return 1. 
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int compare_dates(struct date d1, struct date d2)
{
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    struct date d1, d2;
    printf("Enter date1[DDMMYYYY]: ");
    scanf("%2d%2d%4d", &d1.day, &d1.month, &d1.year);
    printf("Enter date2[DDMMYYYY]: ");
    scanf("%2d%2d%4d", &d2.day, &d2.month, &d2.year);
    if (compare_dates(d1, d2) == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    return 0;
}