// In the file ‘CUSTOMER.DAT’ there are 100 records with the following structure: 
// struct customer 
// {
//     int  accno ; 
//     char name[30] ; 
//     float  balance ; 
// } ; 
// In another file ‘TRANSACTIONS.DAT’ there are several records with the following structure: 
// struct trans 
// { 
//     int  accno ,  
//     char trans_type ;
//     float amount ; 
// } ;
// The parameter trans_type contains D/W indicating deposit or withdrawal of amount. Write a program to update ‘CUSTOMER.DAT’ file, i.e. if the trans_type is ‘D’ then update the balance of ‘CUSTOMER.DAT’ by adding amount to balance for the corresponding accno. Similarly, if trans_type is ‘W’ then subtract the amount from balance. However, while subtracting the amount make sure that the amount should not get overdrawn, i.e. at least 100 Rs. Should remain in the account.
#include <stdio.h>
struct customer
{
    int accno ;
    char name[30] ;
    float balance ;
} ;
struct trans
{
    int accno ;
    char trans_type ;
    float amount ;
} ;
int main(int argc, char const *argv[])
{
    FILE *customer_fptr, *trans_fptr;
    customer_fptr = fopen("CUSTOMER.DAT", "rb+");
    trans_fptr = fopen("TRANSACTIONS.DAT", "rb");
    if (customer_fptr == NULL || trans_fptr == NULL)
    {
        printf("error opening file");
    }
    else
    {
        int i = 0;
        struct customer c;
        struct trans t;
        while (fread(&t, sizeof(t), 1, trans_fptr) == 1)
        {
            fseek(customer_fptr, 0, SEEK_SET);
            while (fread(&c, sizeof(c), 1, customer_fptr) == 1)
            {
                if (c.accno == t.accno)
                {
                    if (t.trans_type == 'D')
                    {
                        c.balance += t.amount;
                        i = 1;
                    }
                    else if (t.trans_type == 'W')
                    {
                        if (c.balance - t.amount >= 100)
                        {
                            c.balance -= t.amount;
                            i = 1;
                        }
                    }
                    if (i == 1)
                    {
                        fseek(customer_fptr, -(int)sizeof(c), SEEK_CUR);
                        fwrite(&c, sizeof(c), 1, customer_fptr);
                        fflush(customer_fptr);
                    }
                    break;
                }
            }
        }
        fclose(customer_fptr);
        fclose(trans_fptr);
    }
    return 0;
}