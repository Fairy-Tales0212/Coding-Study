#include <stdio.h>

int main(void)
{
    long long n;
    while (scanf("%lld", &n) == 1)
    {
        while (n % 10 != 5 && n % 10 != 6)
        {
            n++;
        }
        long long i = n;
        while (1)
        {
            long long p = 10;
            while (i % p != i)
            {
                p *= 10;
            }
            if ((i*i) % p == i)
            {
                printf("%lld\n", i);
                break;
            }
            i++;
            if ((i*i) % p == i)
            {
                printf("%lld\n", i);
                break;
            }
            i+=10;
        }
    }
    return 0;
}