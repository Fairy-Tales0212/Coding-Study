#include <stdio.h>

float num;

void massage(void);

int main(void)
{
    printf("input:");
    scanf("%f",&num);
    massage();
}

void massage(void)
{
    printf("The input is %.1f or %e\n",num,num);
    printf("The input is %+.3f of %E",num,num);
}