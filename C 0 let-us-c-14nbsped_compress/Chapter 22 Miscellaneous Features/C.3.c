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
    struct date doj[10];
    printf("Enter 10 dates[DDMMYYYY]: \n");
    for (int i = 0; i < 10; i++)
    {
        int d, m, y;
        scanf("%2u%2u%4u", &d, &m, &y);
        doj[i].day = d;
        doj[i].month = m;
        doj[i].year = y;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (doj[i].year > doj[j].year)
            {
                struct date temp = doj[i];
                doj[i] = doj[j];
                doj[j] = temp;
            }
            else if (doj[i].year == doj[j].year)
            {
                if (doj[i].month > doj[j].month)
                {
                    struct date temp = doj[i];
                    doj[i] = doj[j];
                    doj[j] = temp;
                }
                else if (doj[i].month == doj[j].month)
                {
                    if (doj[i].day > doj[j].day)
                    {
                        struct date temp = doj[i];
                        doj[i] = doj[j];
                        doj[j] = temp;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%02u/%02u/%04u\n", doj[i].day, doj[i].month, doj[i].year);
    }
    return 0;
}
