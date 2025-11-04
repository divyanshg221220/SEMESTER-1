// Program to take marks details of 10 students and display the name of the student with highest marks and date of birth.
#include <stdio.h>
struct students
{
    char name[50];
    int marks;
    struct DateOfBirth
    {
        int day;
        int month;
        int year;
    } dob;
};
int main(int argc, char const *argv[])
{
    struct students student[10];
    int highest=0;
    int highestIndex=0;
    for (int i=0;i<10;i++)
    {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",student[i].name);
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&student[i].marks);
        if (student[i].marks>highest) {
            highest=student[i].marks;
            highestIndex=i;
        }
        printf("Enter date of birth (dd/mm/yyyy) of student %d: ",i+1);
        scanf("%d/%d/%d",&student[i].dob.day,&student[i].dob.month,&student[i].dob.year);
    }
    printf("Student with highest marks: %s\n",student[highestIndex].name);
    printf("Date of Birth: %d/%d/%d\n",student[highestIndex].dob.day,student[highestIndex].dob.month, student[highestIndex].dob.year);
    return 0;
}