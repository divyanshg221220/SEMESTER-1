// WAP  to print name, age, enrollment no & University name
#include <stdio.h>
int main() {
    char name[70];
    char university[60];
    int age, enrollment_no;
    printf("Enter Name : \n");
    scanf("%[^\n]",name);
    getchar();
    printf("Enter University Name : \n");
    scanf("%[^\n]",university);
    printf("Enter Age : \n");
    scanf("%d",&age);
    printf("Enter Enrollment No : \n");
    scanf("%d",&enrollment_no);
    printf("\nStudent Details\n");
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Enrollment No : %d\n", enrollment_no);
    printf("University Name : %s", university);
    return 0;
}