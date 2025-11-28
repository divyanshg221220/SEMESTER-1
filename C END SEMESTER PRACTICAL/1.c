// Print enrollment number, age , name and University name.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int enrollment,age;
    char name[100],university[100];
    printf("Enter enrollment number: ");
    scanf("%d",&enrollment);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter University name: ");
    scanf("%s",university);
    printf("enrollment number: %d\n",enrollment);
    printf("age: %d\n",age);
    printf("name: %s\n",name);
    printf("University name: %s",university);
    return 0;
}