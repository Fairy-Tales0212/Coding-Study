#include <stdio.h>

void space(int n);

int main(void)
{
    int n, number = 1;
    scanf("%d", &n);
    if (n < 10)
    {
        for (int a = 1; a <= n; a++)
        {
            space(2 * (n - a));
            for (int b = 1; b <= a; b++)
            {
                if (b > 1)
                {
                    space(3);
                }
                printf("%d", number);
            }
            number++;
            printf("\n");
        }
    }
    else
    {
        for (int a = 1; a <= n; a++)
        {
            space(2 * (n - a));
            if (number < 10)
            {
                space(1);
            }
            for (int b = 1; b <= a; b++)
            {
                if (b > 1)
                {
                    if (number < 10)
                    {
                        space(3);
                    }
                    else
                    {
                        space(2);
                    }
                }
                printf("%d", number);
            }
            number++;
            printf("\n");
        }
    }
    return 0;
}

void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}