// Develop a program that receives the month and year from the keyboard as integers and prints the calendar in the following format.
//       September 2004   
// Mon Tue Wed Thu Fri Sat Sun 
//           1   2   3   4   5
//   6   7   8   9  10  11  12
//  13  14  15  16  17  18  19
//  20  21  22  23  24  25  26
//  27  28  29  30
//  Note that according to the Gregorian calendar 01/01/1900 was Monday. With this as the base the calendar should be generated.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int month, year, totalDays = 0;
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("+--------------------------------+\n");
    printf("| +----------------------------+ |\n");
    printf("| |");
    printf("       ");
    switch (month)
    {
    case 1:
        printf("January %d         | |\n", year);
        break;
    case 2:
        printf("February %d        | |\n", year);
        break;
    case 3:
        printf("March %d           | |\n", year);
        break;
    case 4:
        printf("April %d           | |\n", year);
        break;
    case 5:
        printf("May %d             | |\n", year);
        break;
    case 6:
        printf("June %d            | |\n", year);
        break;
    case 7:
        printf("July %d            | |\n", year);
        break;
    case 8:
        printf("August %d          | |\n", year);
        break;
    case 9:
        printf("September %d       | |\n", year);
        break;
    case 10:
        printf("October %d         | |\n", year);
        break;
    case 11:
        printf("November %d        | |\n", year);
        break;
    case 12:
        printf("December %d        | |\n", year);
        break;
    default:
        printf("Invalid month\n");
        break;
    }
    printf("| |Mon Tue Wed Thu Fri Sat Sun | |\n");
    int daysInMonth[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        daysInMonth[1] = 29;
    }
    else
    {
        daysInMonth[1] = 28;
    }
    if (year >= 1900)
    {
        for (int i = 1900; i < year; i++)
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
    else if (year < 1900)   
    {
        for (int i = year; i < 1900; i++)
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
    for (int i = 0; i < month - 1; i++)
    {
        totalDays += daysInMonth[i];
    }
    int day = totalDays % 7;
    printf("| |");
    for (int i = 0; i < day; i++)
    {
        printf("    ");
    }
    int j = day + 1;
    for (int i = 1; i <= daysInMonth[month - 1]; i++)
    {
        printf(" %2d ", i);
        if (i != daysInMonth[month - 1] && j == 7)
        {
            printf("| |\n| |");
            j = 1;
        }
        else
        {
            j++;
        }
    }
    for (j; j <= 7; j++)
    {
        if (j == 1)
        {
            break;
        }
        printf("    ");
    }
    printf("| |\n");
    printf("| +----------------------------+ |\n");
    printf("+--------------------------------+\n");
    return 0;
}