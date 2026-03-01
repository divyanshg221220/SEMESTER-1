// Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).
#include <stdio.h>
float Average(float marks[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[i];
    }
    float average = sum / 3;
    return average;
}
float Percentage(float marks[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[i];
    }
    float percentage = sum / 300 * 100; 
    return percentage;
}
int main( )
{
    float marks[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks in subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    printf("average: %.2f\n", Average(marks));
    printf("percentage: %.2f\n", Percentage(marks));
    return 0;
}
