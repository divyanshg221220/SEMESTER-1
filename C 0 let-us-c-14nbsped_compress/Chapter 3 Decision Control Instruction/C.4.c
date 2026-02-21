// According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year, totalDays = 0;
    printf("Enter year: ");   
    scanf("%d", &year);
    if (year >= 2001)
    {
        for (int i = 2001; i < year; i++)
        {
            if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            {
                totalDays += 366;
            }
            else
            {
                totalDays += 365;
            }
        }
    }
    else if (year < 2001)   
    {
        for (int i = year; i < 2001; i++)
        {
            if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            {    
                totalDays -= 366;
            }
            else
            {
                totalDays -= 365;
            }
        }
    }
    int day = (totalDays + 1) % 7;
    if (day < 0)
    {
        day += 7;
    }
    if (day == 0)
    {
        printf("Sunday\n");
    }
    else if (day == 1)
    {
        printf("Monday\n");
    }
    else if (day == 2)
    {
        printf("Tuesday\n");
    }
    else if (day == 3)
    {
        printf("Wednesday\n");
    }
    else if (day == 4)
    {
        printf("Thursday\n");
    }
    else if (day == 5)
    {
        printf("Friday\n");
    }
    else if (day == 6)
    {
        printf("Saturday\n");
    }
    return 0;
}