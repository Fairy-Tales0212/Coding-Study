#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int arr[448];
        int k = 0;
        for (int i = 1; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                arr[k] = i;
                printf("%d ", i);
                k++;
            }
        }
        for (int i = k-1;i >= 0; i--)
        {
            int c = arr[i];
            if (c * c == n)
            {
                continue;
            }
            printf("%d ", n / c);
        }
        printf("\n");
    }
    return 0;
}