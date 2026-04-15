#include <stdio.h>

void choose(int i, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
        case 3:
            {
                for (int i = 100; i <= 999; i++)
                {
                    choose(i,n);
                }
                break;
            }
        case 4:
            {
                for (int i = 1000; i <= 9999; i++)
                {
                    choose(i,n);
                }
                break;
            }
        case 5:
            {
                for (int i = 10000; i <= 99999; i++)
                {
                    choose(i,n);
                }
                break;
            }
        case 6:
            {
                for (int i = 100000; i <= 999999; i++)
                {
                    choose(i,n);
                }
                break;
            }
        case 7:
            {
                for (int i = 1000000; i <= 9999999; i++)
                {
                    choose(i,n);
                }
                break;
            }
    }
    return 0;
}

void choose(int i, int n)
{
    char str[8];
    sprintf(str, "%d", i);
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        int x = str[k] - '0';
        int a = 1;
        for (int m = 0; m < n; m++)
        {
            a *= x;
        }
        sum += a;
    }
        if (sum == i)
    {
        printf("%d\n", i);
    }
}