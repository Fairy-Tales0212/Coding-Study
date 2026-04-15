#include <stdio.h>

void number(void);
void massage(void);
float num;

int main(void)
{
    number();
    massage();
    return 0;
}

void number(void)
{
    scanf("%f",&num);
}

void massage(void)
{
    printf("Ener a floating-point value: %f\n",num);
    printf("fixed-point notation: %.6f\n",num);
    printf("exponential notation: %e\n",num);
    printf("p notation: %a",num);
}