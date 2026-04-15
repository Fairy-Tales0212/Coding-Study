#include <stdio.h>

double fir,sec,sum;

double cal (double x ,double y);

int main (void)
{
    printf("Enter the first number:");
    scanf("%lf",&fir);
    printf("Enter the second number:");
    scanf("%lf",&sec);
    sum = cal(fir,sec);
    printf("Hrmonic mean:%lf",sum);
    return 0;
}

double cal (double x,double y)
{
    double i,j;
    i = 1/x + 1/y;
    j = 2/i;
    return j;
}