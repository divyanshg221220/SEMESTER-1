// A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    float fine;
    printf("Enter number of days the book is late: ");
    scanf("%d", &day);
    if (day <= 5)
    {
        fine = day * 0.50;
        printf("fine: %.2f rupees\n", fine);
    }
    else if (day <= 10)
    {
        fine = (5 * 0.50) + (day - 5) * 1.0;
        printf("fine: %.2f rupees\n", fine);
    }
    else if (day <= 30)
    {
        fine = (5 * 0.50) + (5 * 1.0) + (day - 10) * 5.0;
        printf("fine: %.2f rupees\n", fine);
    }
    else
    {
        printf("membership cancelled\n");
    }
    return 0;
}