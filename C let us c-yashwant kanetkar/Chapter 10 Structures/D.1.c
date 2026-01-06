// Create a structure to specify data on students given below: 
// Roll number, Name, Department, Course, Year of joining 
// Assume that there are not more than 450 students in the collage. 
// (a) Write a function to print names of all students who joined in a particular year. 
// (b) Write a function to print the data of a student whose roll number is given.
#include <stdio.h>
struct students
{
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
};
void joined_year(struct students s[])
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    for (int i = 0; i < 450; i++)
    {
        if (s[i].year_of_joining == year)
        {
            printf("name: %s\n", s[i].name);
        }
    }
}
void roll_number(struct students s[])
{
    int roll_number;
    printf("Enter roll number: ");
    scanf("%d", &roll_number);
    for (int i = 0; i < 450; i++)
    {
        if (s[i].roll_number == roll_number)
        {
            printf("name: %s\n", s[i].name);
            printf("department: %s\n", s[i].department);
            printf("course: %s\n", s[i].course);
            printf("year of joining: %d\n", s[i].year_of_joining);
        }
    }
}
int main(int argc, char const *argv[])
{
    struct students s[450];
    for (int i = 0; i < 450; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter department: ");
        scanf("%s", s[i].department);
        printf("Enter course: ");
        scanf("%s", s[i].course);
        printf("Enter year of joining: ");
        scanf("%d", &s[i].year_of_joining);
    }
    joined_year(s);
    roll_number(s);
    return 0;
}