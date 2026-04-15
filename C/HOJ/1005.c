#include <stdio.h>
int main(void)
{
    int n, a, s;
    scanf("%d", &n);
    while(n > 0)
    {
        s = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", s);
        scanf("%d", &n);
    }
    return 0;
}