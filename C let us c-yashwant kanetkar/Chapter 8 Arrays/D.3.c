// Implement the Selection Sort, Bubble Sort and Insertion sort algorithms on a set of 25 numbers. (Refer Figure 8.11 for the logic of the algorithms) 
// − Selection sort  
// − Bubble Sort 
// − Insertion Sort
// 
//                          Selection Sort 
//   Iteration 1        Iteration 2        Iteration 3        Iteration 4
//                                                             Result
// 0  44 33 33 22    0 11  0 11  0 11      0 11  0 11        0 11  0 11
// 1  33 44 44 44    1 44  1 44  1 33      1 22  1 22        1 22  1 22 
// 2  55 55 55 55    2 55  2 55  2 55      2 55  2 44        2 33  2 33 
// 3  22 22 22 33    3 33  3 33  3 44      3 44  3 55        3 55  3 44 
// 4  11 11 11 11    4 22  4 22  4 22      4 33  4 33        4 44  4 55
// 
//                          Bubble Sort 
//   Iteration 1        Iteration 2        Iteration 3        Iteration 4 
//                                                             Result
// 0  44 33 33 33    0 33  0 33  0 33      0 33  0 22        0 22  0 11
// 1  33 44 44 44    1 44  1 44  1 22      1 22  1 33        1 11  1 22 
// 2  55 55 55 22    2 22  2 22  2 44      2 11  2 11        2 33  2 33 
// 3  22 22 22 55    3 11  3 11  3 11      3 44  3 44        3 44  3 44 
// 4  11 11 11 11    4 55  4 55  4 55      4 55  4 55        4 55  4 55 
// 
//                          Insertion Sort
//   Iteration 1        Iteration 2        Iteration 3        Iteration 4        Result
//        44                 33                 33                 22            0  11   
//        33                 44                 44                 33            1  22   
//        55                 55                 55                 44            2  33   
//        22                 22                 22                 55            3  44
//        11                 11                 11                 11            4  55
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q, arr[25];
    printf("1. Selection sort\n");
    printf("2. Bubble sort\n");
    printf("3. Insertion sort\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        printf("Enter 25 numbers: \n");
        for (int i = 0; i < 25; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 24; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < 25; j++)
            {
                if (arr[j] < arr[min_index])
                {
                    min_index = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
        break;
    case 2:
        printf("Enter 25 numbers: \n");
        for (int i = 0; i < 25; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 24; i++)
        {
            for (int j = 0; j < 24 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        break;
    case 3:
        printf("Enter 25 numbers: \n");
        for (int i = 0; i < 25; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 1; i < 25; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    printf("sorted array: \n");
    for (int i = 0; i < 25; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}