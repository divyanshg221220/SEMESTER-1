// An automobile company has serial number for engine parts starting from AA0 to FF9. The other characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity manufactured. 
// (a) Specify a structure to store information corresponding to a part. 
// (b) Write a program to retrieve information on parts with serial numbers between BB1 and CC6. 
#include <stdio.h>
#include <string.h>
struct parts
{
    char serial_number[4];
    int year_of_manufacture;
    char material[50];
    int quantity_manufactured;
};
void store_information(struct parts p[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter serial number: ");
        scanf("%s", p[i].serial_number);
        printf("Enter year of manufacture: ");
        scanf("%d", &p[i].year_of_manufacture);
        printf("Enter material: ");
        scanf("%s", p[i].material);
        printf("Enter quantity manufactured: ");
        scanf("%d", &p[i].quantity_manufactured);
    }
}
void retrieve_information_between_BB1_and_CC6(struct parts p[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(p[i].serial_number, "BB1") >= 0 && strcmp(p[i].serial_number, "CC6") <= 0)
        {
            printf("serial number: %s\n", p[i].serial_number);
            printf("year of manufacture: %d\n", p[i].year_of_manufacture);
            printf("material: %s\n", p[i].material);
            printf("quantity manufactured: %d\n", p[i].quantity_manufactured);
        }
    }
}
int main(int argc, char const *argv[])
{
    struct parts p[10];
    store_information(p);
    retrieve_information_between_BB1_and_CC6(p);
    return 0;
}