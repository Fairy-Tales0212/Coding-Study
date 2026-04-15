#include <stdio.h>

int main(void)
{
    int count,sum,n;

    count = 0;
    sum = 0;
    n = 0;
    printf("days:");
    scanf("%d",&n);
    while (count++ < n)
    {
        sum = sum + count;
    }
    printf("sum = %d\n",sum);
    return 0;
}