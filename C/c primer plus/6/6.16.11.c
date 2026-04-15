#include <stdio.h>

int num[8];
int number;

int main (void)
{
    for (number = 0;number < 8;number++)
    {
        scanf("%d",&num[number]);
    }
    for (number = 7;number >= 0;number--)
    {
        printf("%d ",num[number]);
    }
    return 0;
}