#include <stdio.h>

int main(void)
{
    int low, up;
    scanf("%d %d", &low, &up);
    if (low <= up && up <= 100)
    {
        int n;
        n = (up - low) / 2;
        puts("Fahr  celsius");
        for(int i = 0; i <= n; i++)
        {
            double f = low + i * 2;
            double c = 5 * (f - 32) / 9;
            printf("%lf\n",c);
            printf("%d    %.1lf\n", f, c);
        }
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}