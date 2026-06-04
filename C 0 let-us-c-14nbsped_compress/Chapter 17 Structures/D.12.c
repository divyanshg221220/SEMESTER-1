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
        printf("Hurricane Category I\n");
    }
    else if (wind_speed >= 96 && wind_speed <= 110)
    {
        printf("Hurricane Category II\n");
    }
    else if (wind_speed >= 111 && wind_speed <= 130)
    {
        printf("Hurricane Category III\n");
    }
    else if (wind_speed >= 131 && wind_speed <= 155)
    {
        printf("Hurricane Category IV\n");
    }
    else if (wind_speed >= 155)
    {
        printf("Hurricane Category V\n");
    }
    return 0;
}