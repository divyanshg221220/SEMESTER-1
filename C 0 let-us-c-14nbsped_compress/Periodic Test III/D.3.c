// Declare a structure called student containing his name, age and address. Create and initialize three structure variables. Define a function to which these variables are passed. The function should convert the names into uppercase. Print the resultant structure variables. 
#include <stdio.h>
#include <string.h>
struct student
{
    char name[25];
    int age;
    char address[25];
};
void convertToUpper(char str[])
{
    printf("%s\n", strupr(str));
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Enter address of student %d: ", i + 1);
        scanf("%s", s[i].address);
    }
    for (int i = 0; i < n; i++)
    {
        printf("name: ");
        convertToUpper(s[i].name);
        printf("age: %d\n", s[i].age);
        printf("address: %s\n", s[i].address);
    }
    return 0;
}