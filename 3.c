// WAP  to print name, age, enrollment no & University name
#include <stdio.h>
int main() {
    char name[70];
    char university[60];
    int age, enrollment_no;
    printf("Enter your name: ");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your enrollment number: ");
    scanf("%d", &enrollment_no);
    printf("Enter your university name: ");

    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("Enrollment No: %d\n", enrollment_no);
    printf("University Name: %s", university);

    return 0;
}