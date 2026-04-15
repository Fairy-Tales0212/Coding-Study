#include <stdio.h>

int ar[5] = {2, 4, 9, 4, 6};
int num,max;

void cont(int ar[5],int n);

int main(void)
{
    cont(ar,5);
    printf("maximum number:%d",num);
    return 0;
}

void cont(int ar[5],int n)
{
    num = 0;
    max = ar[0];
    for (int i = 1; i < n; i++)
    {
        (max > ar[i]) ? (max = max,num = num) : (max = ar[i],num = i);
    }
}