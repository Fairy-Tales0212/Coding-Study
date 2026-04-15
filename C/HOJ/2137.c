#include <stdio.h>
#include <math.h>

int pm(long long n);

int main(void)
{
    long long n;
    while (scanf("%lld", &n) == 1)
    {
        long long i = 2;
        while (i < n/2)
        {
            if (pm(i))
            {
                if (pm(n - i))
                {
                    printf("%lld=%lld+%lld\n", n, i, n-i);
                }
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}

int pm(long long n)
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