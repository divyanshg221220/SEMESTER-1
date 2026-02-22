// A machine is purchased which will produce earning of Rs. 1000 per year while it lasts. The machine costs Rs. 6000 and will have a salvage of Rs. 2000 when it is condemned. If 12 percent per annum can be earned on alternate investments what would be the minimum life of the machine to make it a more attractive investment compared to alternative investment?
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float annual_earning = 1000.00, cost = 6000.00, salvage = 2000.00, rate = 0.12, present_worth_machine, present_worth_alternate;
    int life = 1;
    while (1)
    {
        present_worth_machine = -cost + (annual_earning * ((1 - pow(1 + rate, -life)) / rate)) + (salvage / pow(1 + rate, life));
        present_worth_alternate = 0;
        if (present_worth_machine >= present_worth_alternate)
        {
            printf("years: %d\n", life);
            break;
        }
        life++;
    }
    return 0;
}
