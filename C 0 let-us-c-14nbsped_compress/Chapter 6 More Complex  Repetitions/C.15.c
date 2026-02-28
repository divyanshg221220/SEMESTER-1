// Write a program to produce the following output:
//     1  
//    1  1  
//   1  2  1
//  1  3  3  1
// 1  4  6  4  1
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        int n = 1;
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", n);
            n = n * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}