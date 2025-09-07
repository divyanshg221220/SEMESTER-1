// Swapping the values of two variables
//    i. Using third variable
//   ii. Without using third variable
int main(int argc, char const *argv[])
{
    int q;
    printf("Swapping the values of two variables\n");
    printf("1. Using third variable\n");
    printf("2. Without using third variable\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if(q==1)
    {
        int a,b,temp;
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
        int a,b;
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
