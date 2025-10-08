// Write a program to make a simple calculator using switch (Add, Subtract, Multiply, Divide).
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    char q;
    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter * for Multiplication\n");
    printf("Enter / for Division\n");
    printf("Enter your choice : ");
    scanf("%s",&q);
    if (q=='+'||q=='-'||q=='*'||q=='/')
    {
        printf("Enter first numbers : ");
        scanf("%d",&a);
        printf("Enter second numbers : ");
        scanf("%d",&b);
        switch (q)
        {
        case '+':
            printf("Addition is %d\n",a+b);
            break;
        case '-':
            printf("Subtraction is %d\n",a-b);
            break;
        case '*':
            printf("Multiplication is %d\n",a*b);
            break;
        case '/':
            if(b!=0){
                printf("Division is %d\n",a/b);
            }
            else{
                printf("Division by zero is not allowed\n");
            }
            break;
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}
