// To print student's name, age, enrollment no. & university's name.
int main(int argc, char const *argv[])
{
    char name[70];
    char university[60];
    int age, enrollment_no;
    printf("Enter Name : ");
    scanf(" %[^\n]",name);
    printf("Enter Age : ");
    scanf("%d",&age);
    printf("Enter Enrollment No : ");
    scanf("%d",&enrollment_no);
    printf("Enter University Name : ");
    scanf(" %[^\n]",university);
    printf("\nStudent Details\n");
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Enrollment No : %d\n",enrollment_no);
    printf("University Name : %s",university);
    return 0;
}