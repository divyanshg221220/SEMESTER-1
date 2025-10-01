// Write a program to make a simple calculator using switch (Add, Subtract, Multiply, Divide).
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q,a,b;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if (q==1||q==2||q==3||q==4)
    {
        printf("Enter first numbers : ");
        scanf("%d",&a);
        printf("Enter second numbers : ");
        scanf("%d",&b);
        switch (q)
        {
        case 1:
            printf("Addition is %d\n",a+b);
            break;
        case 2:
            printf("Subtraction is %d\n",a-b);
            break;
        case 3:
            printf("Multiplication is %d\n",a*b);
            break;
        case 4:
            if(b!=0){
                printf("Division is %d\n",a/b);
            }
            else{
                printf("Division by zero is not allowed\n");
            }
            break;
        }
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}
