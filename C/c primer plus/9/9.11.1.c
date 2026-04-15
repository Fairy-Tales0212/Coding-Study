#include <stdio.h>

double min (double x, double y);

int main(void)
{
    double mini;
    double u,v;
    scanf("%lf %lf",&u,&v);
    mini = min (u,v);
    printf("minimum: %lf",mini);
    return 0;
}

double min (double x, double y)
{
    return (x < y)? x : y;
}