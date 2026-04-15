#include <stdio.h>

int main(void)
{
    int m, n;
    int count = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int x, y, z;
        x = i / 100;
        y = (i - x * 100) / 10;
        z = i - x * 100 - y * 10;
        if (i == x*x*x + y*y*y + z*z*z)
        {
            if (count > 0)
            {
                printf("\n");
            }
            else
            {
                count++;
            }
            printf("%d", i);
        }
    }
    if (m > n)
    {
        printf("Invalid Value");
    }
    return 0;
}