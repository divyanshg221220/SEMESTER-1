// If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float marks, aggregate, percentage;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks in subject %d: ", i + 1);
        scanf("%f", &marks);
        aggregate += marks;
    }
    percentage = aggregate / 5;
    printf("aggregate marks: %.2f\n", aggregate);
    printf("percentage marks: %.2f\n", percentage);
    return 0;
}