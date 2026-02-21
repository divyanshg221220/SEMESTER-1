// Write a program that receives month and date of birth as input and prints the corresponding Zodiac sign based on the following table: 
// Sun Sign     From - To
// Capricorn    December 22 - January 19
// Aquarius     January 20 - February 17
// Pisces       February 18 - March 19
// Aries        March 20 - April 19
// Taurus       April 20 - May 20
// Gemini       May 21 - June 20
// Cancer       June 21 - July 22
// Leo          July 23- August 22
// Virgo        August 23 - September 22
// Libra        September 23 - October 22
// Scorpio      October 23 - November 21
// Sagittarius  November 22 - December 21
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int month, date;
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter date: ");
    scanf("%d", &date);
    if ((month == 12 && date >= 22) || (month == 1 && date <= 19))
    {
        printf("Capricorn");
    }
    else if ((month == 1 && date >= 20) || (month == 2 && date <= 17))
    {
        printf("Aquarius");
    }
    else if ((month == 2 && date >= 18) || (month == 3 && date <= 19))
    {
        printf("Pisces");
    }
    else if ((month == 3 && date >= 20) || (month == 4 && date <= 19))
    {
        printf("Aries");
    }
    else if ((month == 4 && date >= 20) || (month == 5 && date <= 20))
    {
        printf("Taurus");
    }
    else if ((month == 5 && date >= 21) || (month == 6 && date <= 20))
    {
        printf("Gemini");
    }
    else if ((month == 6 && date >= 21) || (month == 7 && date <= 22))
    {
        printf("Cancer");
    }
    else if ((month == 7 && date >= 23) || (month == 8 && date <= 22))
    {
        printf("Leo");
    }
    else if ((month == 8 && date >= 23) || (month == 9 && date <= 22))
    {
        printf("Virgo");
    }
    else if ((month == 9 && date >= 23) || (month == 10 && date <= 22))
    {
        printf("Libra");
    }
    else if ((month == 10 && date >= 23) || (month == 11 && date <= 21))
    {
        printf("Scorpio");
    }
    else if ((month == 11 && date >= 22) || (month == 12 && date <= 21))
    {
        printf("Sagittarius");
    }
    return 0;
}