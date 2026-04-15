#include <stdio.h>

int main(void)
{
    int a, n;
    while (scanf("%d %d", &a, &n) == 2)
    {
        long long sum = a;
        int num = a, x = 1;
        for (int i = 1; i < n; i++)
        {
            x *= 10;
            num += a*x;
            sum += num;
        }
        printf("%llu\n", sum);
    }
    return 0;
}