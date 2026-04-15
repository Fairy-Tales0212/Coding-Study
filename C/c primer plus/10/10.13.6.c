#include <stdio.h>
#define NUM 5

double ar1[NUM] = {1.1, 2.2, 3.3, 4.4, 5.5};
double ar2[NUM];

void tra(double ar1[NUM],double ar2[NUM]);
void pri(double ar1[NUM]);

int main(void)
{
    tra(ar1,ar2);
    pri(ar2);
    return 0;
}

void tra(double ar1[NUM], double ar2[NUM])
{
    for (int i = 0; i < NUM; i++)
    {
        int n = NUM - i - 1;
        ar2[n] = ar1[i];
    }
}

void pri(double ar1[NUM])
{
    for (int i = 0; i < NUM; i++)
    {
        printf("%.1lf ",ar1[i]);
    }
}