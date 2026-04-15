#include <stdio.h>

void transmit(void);
int year;

int main(void)
{
    printf("Please give your years:");
    scanf("%d",&year);
    transmit();
    return 0;
}

void transmit(void)
{
    long long int seconds = year*3.156E10;
    printf("So your seconds are %lld",seconds);
}