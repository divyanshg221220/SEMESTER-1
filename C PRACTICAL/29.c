// Write a program to take marks details of 10 students and display the name of the student with the highest marks.
#include <stdio.h>
struct students
{
    char name[50];
    int marks;
};
int main(int argc, char const *argv[])
{
    struct students students[10];
    int highest=0;
    int highestIndex=0;
    for (int i=0;i<10;i++)
    {
        printf("Enter name of student %d: ",i+1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ",i+1);
        scanf("%d", &students[i].marks);
        if (students[i].marks>highest)
        {
            highest=students[i].marks;
            highestIndex=i;
        }
    }
    printf("Student with highest marks: %s\n",students[highestIndex].name);
    return 0;
}