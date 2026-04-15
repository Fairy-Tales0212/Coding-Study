#include <stdio.h>
#include <math.h>

int pm(int n);

int main(void)
{
    int a;
    while (scanf("%d", &a) == 1)
    {
        int i = a; 
        while (1)
        {
            if (pm(i) && pm(i + 2))
            {
                printf("%d %d\n", i, i+2);
                break;
            }
            i++;
        }
    }
    return 0;
}

int pm(int n)
{
    if (n == 2)
    {
        return 1;
    }
    if (n < 2 || n % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}