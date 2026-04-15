#include <stdio.h>

int main(void)
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == -1 && b == -1)
        {
            break;
        }
        int max, min, MOD = 1000000007;
        int x = a, y = b;
        int r = x % y;
        while (r != 0)
        {
            x = y;
            y = r;
            r = x % y;
        }
        min = y;
        max = 1LL * a / min * b % MOD;
        printf("%d %d\n", min, max);
    }
    return 0;
}