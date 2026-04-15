#include <stdio.h>

void transmit(void);
float inch;
float cm;
const double CON = 2.54;

int main(void)
{
    printf("Please give inch of thing:");
    scanf("%f",&inch);
    transmit();
}

void transmit(void)
{
    cm = inch*CON;
    printf("%.2f is contimeter of thing",cm);
}