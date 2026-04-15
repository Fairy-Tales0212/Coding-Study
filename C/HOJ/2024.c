#include <stdio.h>

long long fact( int n );

int main(void)
{
    int n;
    long long s0;
    scanf("%d", &n);
    s0 = fact(n);
    printf("%lld", s0);
    return 0;
}

long long fact( int n )
{
    long long s0 = 0;
    for(int i1 = 1; i1 <= n; i1++)
    {
        long long s1 = 1;
        for(int i2 = 1; i2 <= i1; i2++)
        {
            s1 *= i2;
        }
        s0 += s1;
    }
    return s0;
}