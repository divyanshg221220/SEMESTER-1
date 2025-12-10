// According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year, day, leapYears = 0, normalYears = 0, totalDays;
    printf("Enter year: ");   
    scanf("%d", &year);
    if (year>1900)
    {
        for (int i = 1900; i < year; i++)
        {
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                leapYears++;
            else
                normalYears++;
        }
    }
    else
    {
        for (int i = 1900 - 1; i >= year; i--)
        {
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                leapYears++;
            else
                normalYears++;
        }
    }
    totalDays = (leapYears * 366) + (normalYears * 365);
    day = totalDays % 7;
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 0:
        printf("Sunday\n");
        break;
    default:
        break;
    }
    return 0;
}