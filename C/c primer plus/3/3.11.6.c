#include <stdio.h>

void weigh(void);
void number(void);
double water;
double water_weigh;
double water_number;

int main(void)
{
    printf("Please give me water kilogram:");
    scanf("%lf",&water);
    weigh();
    number();
    return 0;
}

void weigh(void)
{
    water_weigh = water*950;
}

void number(void)
{
    water_number = water_weigh/3.0E-23;
    printf("\nSo number of water are %lf",water_number);
}