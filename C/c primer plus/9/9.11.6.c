#include <stdio.h>

double fir,sec,thr;
void cont (double*x,double*y,double*z);

int main (void)
{
    printf("Enter first number:");
    scanf("%lf",&fir);
    printf("Enter second number:");
    scanf("%lf",&sec);
    printf("Enter three number:");
    scanf("%lf",&thr);
    cont (&fir,&sec,&thr);
    printf("First number:%.2lf",fir);
    printf("Second number:%.2lf",sec);
    printf("Three number:%.2lf",thr);
    return 0;
}

void cont (double*x,double*y,double*z)
{
    int u,v,j;
    (*x <= *y)?(u = *x,j = *y):(u = *y,j = *x);
    if (*x <= *y)
    {
        if (*z <= *x)
        {
            u = *z;
            v = *x;
        }
        else if (*x < *z && *z < *y)
        {
            v = *z;
        }
        else if (*y <= *z)
        {
            v = *y;
            j = *z;
        }
    }
    if (*y < *x)
    {
        if (*z <= *y)
        {
            u = *z;
            v = *y;
        }
        else if (*y < *z && *z < *x)
        {
            v = *z;
        }
        else if (*x <= *z)
        {
            v = *x;
            j = *z;
        }
    }
    *x = u;
    *y = v;
    *z = j;
}