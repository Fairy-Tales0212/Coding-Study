#include <stdio.h>

int main(void)
{
    int n, m;
    double s = 0;
    scanf("%d %d", &m, &n);
    int x = n - m + 1;
    for(int i = 0; i < x; i++)
    {
        double c = m + i;
        s += c * c + 1 / c;
    }
    printf("%.6lf", s);
    return 0;
}