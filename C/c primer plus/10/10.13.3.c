#include <stdio.h>

int ar[5] = {4,7,3,7,2};
int max;

void cont(int ar[5],int num);

int main(void)
{
    cont(ar,5);

    printf("maximum:%d",max);
    return 0;
}

void cont(int ar[5],int num)
{
    max = ar[0];
    for (int i = 1; i < num; i++)
    {
        (max > ar[i])?(max = max):(max = ar[i]);
    } 
}