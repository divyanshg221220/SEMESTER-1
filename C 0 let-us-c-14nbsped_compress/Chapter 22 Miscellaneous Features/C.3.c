// Write a program, which stores information about a date in a structure containing three members—day, month and year. Using bit fields the day number should get stored in first 5 bits of day, the month number in 4 bits of month and year in 12 bits of year. Write a program to read date of joining of 10 employees and display them in ascending order of year. 
#include <stdio.h>
struct date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};
int main(int argc, char const *argv[])
{
    struct date date[10];
    for (int i = 0; i < 10; i++)
    {
        int d, m, y;
        printf("Enter date of joining for employee %d [DDMMYYYY]: ", i + 1);
        scanf("%2u%2u%4u", &d, &m, &y);
        date[i].day = d;
        date[i].month = m;
        date[i].year = y;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (date[i].year > date[j].year)
            {
                struct date temp = date[i];
                date[i] = date[j];
                date[j] = temp;
            }
            else if (date[i].year == date[j].year)
            {
                if (date[i].month > date[j].month)
                {
                    struct date temp = date[i];
                    date[i] = date[j];
                    date[j] = temp;
                }
                else if (date[i].month == date[j].month)
                {
                    if (date[i].day > date[j].day)
                    {
                        struct date temp = date[i];
                        date[i] = date[j];
                        date[j] = temp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%02u/%02u/%04u\n", date[i].day, date[i].month, date[i].year);
    }
    return 0;
}
