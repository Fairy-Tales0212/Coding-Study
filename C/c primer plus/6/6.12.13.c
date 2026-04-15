#include <stdio.h>

int array[8];
int fre,num,power;

int main (void)
{
    for (fre = 0;fre < 8;fre++)
    {
        power = fre +1;
        num = 1;
        for (;power > 0;power--)
        {
            num *= 2;
        }
        array[fre] =num;
    }
    fre = 0;
    do
    {
        printf("%d\n",array[fre]);
        fre++;
    }while (fre < 8);
    return 0;
}