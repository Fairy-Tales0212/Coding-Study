#include <stdio.h>

int fact( int n, int p);

int main(void)
{
    int n, p;
    int s0 = 0;
    scanf("%d %d", &n, &p);
    for(int i = 1; i <= n; i++)
    {

        s0 = (s0 + fact(i,p)) % p;
    }
    printf("%d", s0);
    return 0;
}

int fact( int n, int p)
{
    int s1 = 1;
    for(int i = 1; i <= n; i++)
    {
        s1 = (s1 * i) % p;
    }
    return s1;
}