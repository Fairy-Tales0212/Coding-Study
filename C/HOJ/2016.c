#include <stdio.h>

int main(void)
{
    int n;
    double m;
    double a = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        double x = i;
        a *= -1;
        m += a * 1 / (x * 3 + 1);
    }
    printf("%.8lf", m);
    return 0;
}