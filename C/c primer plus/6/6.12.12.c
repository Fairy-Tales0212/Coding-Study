#include <stdio.h>

const float up = 1.0;
float down = 1.0;
float num;

void output (float x);

int main (void)
{
    while (printf("Give a number:"),scanf("%f",&num),num > 0)
    {
        output (num);
    }
    return 0;
}

void output (float x)
{
    float sum_1;
    float sum_2;
    printf("%.1f",up);
    sum_1 = up;
    for (down = 1.0;down <= num;++down)
    {
        printf("+ %.1f/%.1f",up,down);
        sum_1 += up / down;
    }
    printf("= %f\n",sum_1);
    printf("%.1f",up);
    sum_2 = up;
    for (down = 1.0;down <= num;++down)
    {
        printf("- %.1f/%.1f",up,down);
        sum_2 -= up / down;
    }
    printf("= %f",sum_2);
}