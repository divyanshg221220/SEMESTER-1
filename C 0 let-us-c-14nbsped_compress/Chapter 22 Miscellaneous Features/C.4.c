// Write a program to read and store information about insurance policy holder. The information contains details like gender, whether the holder is minor/major, policy name and duration of the policy. Make use of bit-fields to store this information. 
#include <stdio.h>
struct date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};
struct policy
{
    unsigned int gender : 1;
    unsigned int minor_major : 1;
    char name[25];
    struct date duration;
};
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of policies: ");
    scanf("%d", &n);
    struct policy policy[n];
    for (int i = 0; i < n; i++)
    {
        int gender, minor_major, day, month, year;
        printf("Enter gender [Male:1/Female:0]: ");
        scanf("%d", &gender);
        printf("Enter minor or major [Minor:1/Major:0]: ");
        scanf("%d", &minor_major);
        printf("Enter name: ");
        scanf("%s", policy[i].name);
        printf("Enter duration[DDMMYYYY]: ");
        scanf("%2d%2d%4d", &day, &month, &year);
        policy[i].gender = gender;
        policy[i].minor_major = minor_major;
        policy[i].duration.day = day;
        policy[i].duration.month = month;
        policy[i].duration.year = year;
    }
    for (int i = 0; i < n; i++)
    {
        printf("gender: ");
        printf(policy[i].gender == 1 ? "male\n" : "female\n");
        printf("minor or major: ");
        printf(policy[i].minor_major == 1 ? "minor\n" : "major\n");
        printf("name: %s\n", policy[i].name);
        printf("duration: %02u/%02u/%04u\n", policy[i].duration.day, policy[i].duration.month, policy[i].duration.year);
    }
    return 0;
}
