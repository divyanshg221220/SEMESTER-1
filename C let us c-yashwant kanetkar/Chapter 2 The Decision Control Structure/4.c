// According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>

int isLeapYear(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    int year, totalDays = 0;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    printf("Enter year: ");   
    scanf("%d", &year);
    
    // Count total days from 1900 to the given year
    if (year >= 1900)
    {
        for (int i = 1900; i < year; i++)
        {
            if (isLeapYear(i))
                totalDays += 366;
            else
                totalDays += 365;
        }
    }
    else if (year < 1900)   
    {
        for (int i = year; i < 1900; i++)
        {
            if (isLeapYear(i))
                totalDays += 366;
            else
                totalDays += 365;
        }
        totalDays = -totalDays;  // Make it negative for years before 1900
    }
    
    // Jan 1, 1900 was Monday (day 1)
    // We need to find which day it was on Jan 1 of the given year
    int dayIndex = (totalDays + 1) % 7;
    if (dayIndex < 0)
        dayIndex += 7;
    
    printf("%s\n", days[dayIndex]);
    return 0;
}