// WAP to swap 2 no.'s 
// i) Using temp
// ii) Without temp.
int main(int argc, char const *argv[])
{
    int q,a,b,temp;
    printf("WAP to swap 2 no.'s\n");
    printf("1. Using temp\n");
    printf("2. Without temp\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if (q==1)
    {
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        temp=a;
        a=b;
        b=temp;
        printf("First number : %d\nSecond number : %d",a,b);
    }
    else if (q==2)
    {
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("First number : %d\nSecond number : %d",a,b);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
