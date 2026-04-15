#include <stdio.h>

double fir,sec;
double sum;

double cal (double x,double y);

int main (void)
{
    while (printf("Enter first number:"),scanf("%lf",&fir),printf("Enter second number:"),scanf("%lf",&sec),fir != 0 && sec != 0)
    {
        sum = cal(fir,sec);
        printf("Results:%lf\n",sum);
    }
    return 0;
}

double cal (double x,double y)
{
    double sum = (fir - sec) / (fir * sec);
    return sum;
}