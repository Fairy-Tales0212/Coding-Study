#include <stdio.h>

int main(void)
{
    int n;
    while((scanf("%d", &n)) == 1)
    {
        int s = 0;
        int a;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", s);
    }
    return 0;
}