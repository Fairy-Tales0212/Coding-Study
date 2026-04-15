#include <stdio.h>

int max,min;
int num,square,cubic;
int sum;

void cal(int x,int y);

int main(void)
{
    printf("Enter a maximum number:");
    scanf("%d",&max);
    printf("Enter a minimum number:");
    scanf("%d",&min);
    cal(min,max);
    return 0;
}

void cal(int x,int y)
{
    sum = 0;
    for (;sum < y - x;sum++)
    {
        int z = x + sum;
        printf("number:%d  square:%d  cubic:%d\n",z,z*z,z*z*z);
    }
}