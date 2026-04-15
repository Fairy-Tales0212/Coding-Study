#include <stdio.h>
#include <stdlib.h>

#define NUM 100

int ar[NUM];

void random(int*ar);
void stsrt(int*ar);
void show(int*ar);

int main(void)
{
    random(ar);

    show(ar);

    stsrt(ar);

    show(ar);

    return 0;
}

void random(int*ar)
{
    for (int i = 0; i < NUM; i++)
    {
        ar[i] = rand() % 10 + 1;
    }
}

void stsrt(int*ar)
{
    int n;
    for (int i1 = 0; i1 < NUM -1 ; i1++)
    {
        for (int i2 = i1 + 1; i2 < NUM; i2++)
        {
            if (ar[i1] < ar[i2])
            {
                n = ar[i1];
                ar[i1] = ar[i2];
                ar[i2] = n;
            }
        }
    }
}

void show(int*ar)
{
    for (int i = 0; i < NUM; i++)
    {
        printf("%d",ar[i]);
        putchar('\n');
    }
}