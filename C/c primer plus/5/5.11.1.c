#include <stdio.h>
#define trans 60

float n;

int main(void)
{
    while (printf("请输入分钟数（小于或等于零时结束程序）:"),scanf("%f",&n),n > 0)
    {
        printf("hour: %.2f\n",n/trans);
        printf("second: %.2f\n",n*trans);
    }
    printf("程序结束");
    return 0;
}