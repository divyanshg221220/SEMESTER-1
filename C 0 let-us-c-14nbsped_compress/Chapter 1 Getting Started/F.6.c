// Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, … A8.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int l = 1189, b = 841;
    for (int i = 0; i < 9; i++)
    {
        printf("A%d: %d x %d\n", i, l, b);
        if (l > b)
        {
            int temp = l;
            l = b;
            b = temp / 2;
        }
        else
        {
            int temp = b;
            b = l;
            l = temp / 2;
        }
    }
    return 0;
}