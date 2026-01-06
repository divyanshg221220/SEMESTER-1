// Create a structure to specify data of customers in a bank. The data to be stored is: Account number, Name, Balance in account. Assume maximum of 200 customers in the bank. 
// (a) Write a function to print the Account number and name of each customer with balance below Rs. 100. 
// (b) If a customer request for withdrawal or deposit, it is given in the form: 
// Acct. no, amount, code (1 for deposit, 0 for withdrawal) 
// Write a program to give a message, “The balance is insufficient for the specified withdrawal”.
#include <stdio.h>
struct customers
{
    int account_number;
    char name[50];
    float balance;
};
void balance_below_100(struct customers c[])
{
    for (int i = 0; i < 200; i++)
    {
        if (c[i].balance < 100)
        {
            printf("account number: %d\n", c[i].account_number);
            printf("name: %s\n", c[i].name);
        }
    }
}
void withdrawal_deposit(struct customers c[])
{
    int account_number, amount, code;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);
    for (int i = 0; i < 200; i++)
    {
        if (c[i].account_number == account_number)
        {
            if (code == 1)
            {
                c[i].balance += amount;
            }
            else if (code == 0)
            {
                if (c[i].balance < amount)
                {
                    printf("The balance is insufficient for the specified withdrawal\n");
                }
                else
                {
                    c[i].balance -= amount;
                }
            }
            printf("balance %.2f\n", c[i].balance);
            break;
        }
    }
}
int main(int argc, char const *argv[])
{
    struct customers c[200];
    for (int i = 0; i < 200; i++)
    {
        printf("Enter account number: ");
        scanf("%d", &c[i].account_number);
        printf("Enter name: ");
        scanf("%s", c[i].name);
        printf("Enter balance: ");
        scanf("%f", &c[i].balance);
    }
    balance_below_100(c);
    withdrawal_deposit(c);
    return 0;
}
