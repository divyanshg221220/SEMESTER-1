// Write a recursive function to obtain the running sum of first 25 natural numbers.
#include <stdio.h>
int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int main(int argc, char const *argv[])
{
    printf("sum: %d\n", sum(25));
    return 0;
}
