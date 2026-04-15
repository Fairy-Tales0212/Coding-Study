#include <stdio.h>
#define NUM 7

int max, min,sum;
int ar[NUM] = {15, 34, 64, 23, 75, 16, 52};

void cont(int ars[NUM]);

int main(void)
{
    cont(ar);
    printf("Difference:%d",sum);
}

void cont(int ars[NUM])
{
    max = ars[0];
    min = ars[0];
    for (int i = 1; i < NUM; i++)
    {
        (max > ars[i]) ? (max = max) : (max = ars[i]);
        (min < ars[i]) ? (min = min) : (min = ars[i]);
    }
    sum = max-min;
}