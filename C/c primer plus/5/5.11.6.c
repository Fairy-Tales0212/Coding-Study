#include <stdio.h>

int sum,days,count,num;

int main(void)
{
    sum = 0;
    days = 0;
    count = 0;
    num = 0;
    printf("days:");
    scanf("%d",&days);
    while (count++ < days)
    {
        num = count*count;
        sum = num + sum;
    }
    printf("money:%d",sum);
    return 0;
}