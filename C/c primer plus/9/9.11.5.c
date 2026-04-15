#include <stdio.h>

double fir,sec;

void larger_of (double * x,double * y);

int main(void)
{
    printf("Enter first number:");
    scanf("%lf",&fir);
    printf("Enter second number:");
    scanf("%lf",&sec);
    larger_of(&fir,&sec);
    printf("first number:%lf",fir);
    printf("\nsecond number:%lf",sec);
    return 0;
}

void larger_of (double * x,double * y)
{
    (*x < *y)?(*x = *y):(*y = *x);
}