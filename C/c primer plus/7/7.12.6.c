#include <stdio.h>

char lat;
int num_e,num_i,num,sum;

int main (void)
{
    num_e = 0;
    num_i = 0;
    sum = 0;
    num = 0;
    while ((lat = getchar()) != '#')
    {
        sum++;
        if (lat == 'e')
        {
            num_e++;
        }
        if (sum ==2 && num_e == 1 &&lat == 'i')
        {
            num++;
            num_e = 0;
        }
        if (sum ==2 && num_e == 1 &&lat != 'i')
        {
            num_e =0;
        }
        if (sum == 2)
        {
            sum =0;
        }
    }
    printf("number:%d",num);
    return 0;
}