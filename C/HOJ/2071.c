#include <stdio.h>

int year(int y);
int month(int m, int y);
int day(int d);

int main(void)
{
    int y, m, d, d1, d2, d3;
    int count = 0;
    while (scanf("%d%d%d", &y, &m, &d) == 3)
    {
        int sum = 0;
        d1 = year(y);
        d2 = month(m,y);
        d3 = day(d);
        sum = d1 + d2 + d3;
        if (count > 0)
        {
            printf("\n");
        }
        else
        {
            count++;
        }
        if (sum % 5 > 0 && sum % 5 < 4)
        {
            printf("fishing");
        }
        else
        {
            printf("sleeping");
        }
    }
    return 0;
}

int year(int y)
{
    int c = y - 1990;
    int r = 0;
    int d1;
    for (int i = 0; i < c; i++)
    {
        if ( (1990 + i) % 100 != 0 )
        {
            if ( (1990 + i) % 4 == 0 )
            {
                r++;
            }
        }
        else if ( (1990 + i) % 400 == 0 )
        {
            r++;
        }
    }
    d1 = r * 366 + (c - r) * 365;
    return d1;
}

int month(int m,int y)
{
    int d2;
    switch (m)
    {
        case 2:
            {
                d2 = 31;
                break;
            }
        case 3:
            {
                d2 = 31 * 1;
                break;
            }
        case 4:
            {
               d2 = 31 * 2;
                break;
            }
        case 5:
            {
                d2 = 31 * 2 + 30 * 1;
                break;
            }
        case 6:
            {
                d2 = 31 * 3 + 30 * 1;
                break;
            }
        case 7:
            {
                d2 = 31 * 3 + 30 * 2;
                break;
            }
        case 8:
            {
                d2 = 31 * 4 + 30 * 2;
                break;
            }
        case 9:
            {
                d2 = 31 * 5 + 30 * 2;
                break;
            }
        case 10:
            {
                d2 = 31 * 5 + 30 * 3;
                break;
            }
        case 11:
            {
                d2 = 31 * 6 + 30 * 3;
                break;
            }
        case 1:
            {
                d2 = 0;
                break;
            }
        case 12:
            {
                d2 = (31 * 6 + 30 * 4);
                break;
            }

    }
    if (m > 2)
    {
        if (y % 100 != 0)
        {
            if (y % 4 == 0)
            {
                d2 += 29;
            }
            else
            {
                d2 += 28;
            }
        }
        else 
        {
            if (y % 400 == 0)
            {
                d2 += 29;
            }
            else
            {
                d2 += 28;
            }
        }
    }
    return d2;
}

int day(int d)
{
    return d;
}