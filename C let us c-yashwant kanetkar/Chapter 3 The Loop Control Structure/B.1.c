// Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hours;
    float overtimePay;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the number of hours worked by employee %d: ", i);
        scanf("%d", &hours);
        if (hours > 40)
        {
            overtimePay = (hours - 40) * 12.00;
        }
        else
        {
            overtimePay = 0;
        }
        printf("overtime pay for employee %d is: Rs. %.2f\n", i, overtimePay);
    }
    return 0;
}