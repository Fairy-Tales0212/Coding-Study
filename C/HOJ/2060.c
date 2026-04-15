#include <stdio.h>

int year( int x );
int month( int x );
int day( int x, int c1, int m);
int find(int m, int c1);

int main(void)
{
    int y, m, d, c1, c2, c3;
    while (scanf("%d%d%d", &y, &m, &d) == 3)
    {
        c1 = year(y);
        c2 = month(m);
        c3 = day(d, c1, m);
        if ( c2 == 1 && c3 == 1)
        {
            puts("legal");
        }
        else 
        {
            puts("illegal");
        }
    }
    return 0;
}

int year( int x )
{
    int c1;
    if ( (x % 4) == 0 )
    {
        if ( (x % 100) != 0)
        {
            c1 = 1;
        }
        else if ( (x % 400) == 0)
        {
            c1 = 1;
        }
        else 
        {
            c1 = 0;
        }
    }
    else
    {
        c1 = 0;
    }
    return c1;
}

int month ( int x )
{
    int c2;
    if ( x <= 12 && x > 0)
    {
        c2 = 1;
    }
    else
    {
        c2 = 0;
    }
    return c2;
}

int day (int x,int c1,int m)
{
    int d1, d2, k;
    k = find(m, c1);
    if (k == 1)
    {
        d1 = 1;
    }
    else
    {
        if (m == 2)
        {
            if (c1 == 1)
            {
                d1 = 2;
            }
            else
            {
                d1 = 3;
            }
        }
        else
        {
            d1 = 0;
        }
    }
    switch (d1)
    {
        case 0:
            {
                if (x > 0 && x <31)
                {
                    d2 = 1;
                }
                else 
                {
                    d2 = 0;
                }
                break;
            }
        case 1:
            {
                if (x > 0 && x < 32)
                {
                    d2 = 1;
                }
                else 
                {
                    d2 = 0;
                }
                break;
            }
        case 2:
            {
                if (x > 0 && x < 30)
                {
                    d2 = 1;
                }
                else
                {
                    d2 = 0;
                }
                break;
            }
        case 3:
            {
                if (x > 0 && x < 29)
                {
                    d2 = 1;
                }
                else 
                {
                    d2 = 0;
                }
                break;
            }
    }
    return d2;
}

int find(int m, int c1)
{
    int k;
    int mon_31[7] = {1, 3, 5, 7, 8, 10, 12};
    for (int i = 0; i < 7; i++)
    {
        if ( mon_31[i] == m)
        {
            k = 1;
            return k;
        }
    }
    k = 0;
    return k;
}