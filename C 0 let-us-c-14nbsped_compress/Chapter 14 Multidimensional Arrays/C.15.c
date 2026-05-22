// For the following set of n data points (x, y), compute the correlation coefficient r, given by 
// r = ( Σxy - ΣxΣy ) / ( [nΣx^2-(Σx)^2][nΣy^2-(Σy)^2] ) ^ (1/2)
//   x        y
// 34.22    102.43 
// 39.87    100.93 
// 41.85    97.43 
// 43.23    97.81 
// 40.06    98.32 
// 53.29    98.32 
// 53.29    100.07 
// 54.14    97.08 
// 49.12    91.59 
// 40.71    94.85 
// 55.15    94.65
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
   float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
   float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
   float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, sum_y2 = 0, r;
   int n = 11;
   for (int i = 0; i < n; i++)
   {
       sum_x += x[i];
       sum_y += y[i];
       sum_xy += x[i] * y[i];
       sum_x2 += x[i] * x[i];
       sum_y2 += y[i] * y[i];
   }
   r = (sum_xy - sum_x * sum_y) / sqrt((n * sum_x2 - sum_x * sum_x) * (n * sum_y2 - sum_y * sum_y));
   printf("correlation coefficient = %.2f\n", r);
   return 0;
}