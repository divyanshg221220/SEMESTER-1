// Write a menu driven program that depicts the working of a library. The menu options should be:
// 1. Add book information 
// 2. Display book information 
// 3. List all books of given author 
// 4. List the title of specified book 
// 5. List the count of books in the library 
// 6. List the books in the order of accession number 
// 7. Exit 
// Create a structure called library to hold accession number, title of the book, author name, price of the book, and flag indicating whether book is issued or not.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
    int accession_number;
    char title[50];
    char author_name[50];
    float price;
    int flag;
};
int main(int argc, char const *argv[])
{
    int choice;
    struct library *l = (struct library *)malloc(sizeof(struct library));
    do
    {
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        static int n = 0;
        switch (choice)
        {
        case 1:
            if (n >= sizeof(l) / sizeof(l[0]))
            {
                realloc(l, (n + 1) * sizeof(l[0]));
            }
            printf("Enter accession number: ");
            scanf("%d", &l[n].accession_number);
            printf("Enter title: ");
            scanf("%s", l[n].title);
            printf("Enter author name: ");
            scanf("%s", l[n].author_name);
            printf("Enter price: ");
            scanf("%f", &l[n].price);
            printf("Enter flag (0 for not issued, 1 for issued): ");
            scanf("%d", &l[n].flag);
            n++;
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                printf("accession number: %d\n", l[i].accession_number);
                printf("title: %s\n", l[i].title);
                printf("author name: %s\n", l[i].author_name);
                printf("price: %.2f\n", l[i].price);
                printf("flag: %d\n", l[i].flag);
            }
            break;
        case 3:
            {
                char author_name[50];
                printf("Enter author name: ");
                scanf("%s", author_name);
                for (int i = 0; i < n; i++)
                {
                    if (strcmp(l[i].author_name, author_name) == 0)
                    {
                        printf("accession number: %d\n", l[i].accession_number);
                        printf("title: %s\n", l[i].title);
                        printf("price: %.2f\n", l[i].price);
                        printf("flag: %d\n", l[i].flag);
                    }
                }
                break;
            }
        case 4:
            {
                int accession_number;
                printf("Enter accession number: ");
                scanf("%d", &accession_number);
                for (int i = 0; i < n; i++)
                {
                    if (l[i].accession_number == accession_number)
                    {
                        printf("title: %s\n", l[i].title);
                        printf("author name: %s\n", l[i].author_name);
                        printf("price: %.2f\n", l[i].price);
                        printf("flag: %d\n", l[i].flag);
                    }
                }
                break;
            }
        case 5:
            printf("count: %d\n", n);
            break;
        case 6:
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (l[i].accession_number > l[j].accession_number)
                    {
                        struct library temp = l[i];
                        l[i] = l[j];
                        l[j] = temp;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                printf("accession number: %d\n", l[i].accession_number);
                printf("title: %s\n", l[i].title);
                printf("author name: %s\n", l[i].author_name);
                printf("price: %.2f\n", l[i].price);
                printf("flag: %d\n", l[i].flag);
            }
            break;
        case 7:
            free(l);
            printf("Exit\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 7);
    return 0;
}