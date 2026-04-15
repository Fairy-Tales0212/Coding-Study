#include <stdio.h>

char lat;
int num;

int main(void)
{
    while ((lat = getchar()) != '#')
    {
        switch (lat)
        {
            case '.':
            {
                lat = '!';
                putchar(lat);
                num++;
                break;
            }
            case '!':
            {
                putchar(lat);
                putchar(lat);
                num++;
                break;
            }
            default:
            {
                putchar(lat);
            }
        }
    }
    printf("number:%d",num);
    return 0;
}