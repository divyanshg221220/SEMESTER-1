// Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence: 
// 1   1   2   3   5   8   13   21   34   55   89...
#include <stdio.h>
void fibonacci(int n, int a, int b)
{
    static int count = 1;
    if (count <= n)
    {
        printf("%d ", a);
        count++;
        fibonacci(n, b, a + b);
    }
}
int main(int argc, char const *argv[])
{
    fibonacci(25, 1, 1);
    return 0;
}
