#include <stdio.h>

int x;
int y;

int main(void)
{
    printf("Please give a number:");
    scanf("%d",&y);
    x = y-1;
    while (x++ < y + 10)
    {
        printf("%d\n",x);
    }
    return 0;
}