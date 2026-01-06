// A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read these records and arrange them in ascending order by average runs. Use the qusort( ) standard library function.
#include <stdio.h>
#include <stdlib.h>
struct cricketers
{
    char name[50];
    int age;
    int number_of_test_matches;
    float average_runs;
};
int cmp_average_runs(const void *a, const void *b)
{
    const struct cricketers *ca = a;
    const struct cricketers *cb = b;
    if (ca->average_runs < cb->average_runs)
        return -1;
    if (ca->average_runs > cb->average_runs)
        return 1;
    return 0;
}
int main(int argc, char const *argv[])
{
    struct cricketers c[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter name: ");
        scanf("%s", c[i].name);
        printf("Enter age: ");
        scanf("%d", &c[i].age);
        printf("Enter number of test matches: ");
        scanf("%d", &c[i].number_of_test_matches);
        printf("Enter average runs: ");
        scanf("%f", &c[i].average_runs);
    }
    qsort(c, 20, sizeof(struct cricketers), cmp_average_runs);
    for (int i = 0; i < 20; i++)
    {
        printf("name: %s\n", c[i].name);
        printf("age: %d\n", c[i].age);
        printf("number of test matches: %d\n", c[i].number_of_test_matches);
        printf("average runs: %.2f\n", c[i].average_runs);
    }
    return 0;
}