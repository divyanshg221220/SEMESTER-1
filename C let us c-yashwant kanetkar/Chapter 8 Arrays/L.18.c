// For the following set of point given by (x, y) fit a straight line given by 
// y = a  + bx  
// where, 
// a = y¯ - bx¯ and 
// b = nΣyx-ΣxΣy/[n(Σx^2)-(Σx)^2]
//   x    y
// 3.0    1.5
// 4.5    2.0
// 5.5    3.5
// 6.5    5.0
// 7.5    6.0
// 8.5    7.5
// 8.0    9.0
// 9.0    10.5
// 9.5    12.0
// 10.0   14.0
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float x[10] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
    float y[10] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
    float sum_x = 0.0, sum_y = 0.0, sum_yx = 0.0, sum_x2 = 0.0, a, b;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_yx += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }
    b = (n * sum_yx - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    a = (sum_y / n) - b * (sum_x / n);
    printf("y = %.2f + %.2fx\n", a, b);
    return 0;
}