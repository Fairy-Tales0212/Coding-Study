#include <stdio.h>

int main(void)
{
    int n;
    int m = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        m *= i;
    }
    printf("%d", m);
    return 0;
}