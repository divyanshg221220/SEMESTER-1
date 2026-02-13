// Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);
    dearness_allowance = basic_salary * 40 / 100;
    house_rent_allowance = basic_salary * 20 / 100;
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    printf("gross salary: %.2f\n", gross_salary);
    return 0;
}