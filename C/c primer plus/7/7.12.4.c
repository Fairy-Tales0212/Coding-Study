#include <stdio.h>

char lat;
int num = 0;

int main(void)
{
    while ((lat = getchar()) != '#')
    {
        if (lat == '.')
        {
            lat = '!';
            putchar(lat);
            num++;
        }
        else if (lat == '!')
        {
            putchar(lat);
            putchar(lat);
            num++;
        }
        else
        {
            putchar(lat);
        }
    }
    printf("\nnumber: %d",num);
    return 0;
}