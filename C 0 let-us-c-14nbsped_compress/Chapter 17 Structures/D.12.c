// Write a program that receives wind speed as input and categorizes the hurricane as per the following table: 
// Wind Speed in miles / hour  Hurricane Category 
// 74 – 95                     I 
// 96 – 110                    II 
// 111 – 130                   III 
// 131 – 155                   IV 
// 155                         V
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int wind_speed;
    printf("Enter wind speed: ");
    scanf("%d", &wind_speed);
    if (wind_speed >= 74 && wind_speed <= 95)
    {
        printf("hurricane category I\n");
    }
    else if (wind_speed >= 96 && wind_speed <= 110)
    {
        printf("hurricane category II\n");
    }
    else if (wind_speed >= 111 && wind_speed <= 130)
    {
        printf("hurricane category III\n");
    }
    else if (wind_speed >= 131 && wind_speed <= 155)
    {
        printf("hurricane category IV\n");
    }
    else if (wind_speed >= 155)
    {
        printf("hurricane category V\n");
    }
    return 0;
}