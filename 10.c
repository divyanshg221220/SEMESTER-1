// Write a C program to find if a number is negative, positive or zero using if...else statement
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>0) printf("%d is positive",n);
    else if (n<0) printf("%d is negative",n);
    else printf("The number is zero");
    return 0;
}
