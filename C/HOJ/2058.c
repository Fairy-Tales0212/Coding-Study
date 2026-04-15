#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    int count = 0;
    while (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) == 6)
    {   
        if (count > 0)
        {
            printf("\n");
        }
        count++;
        a = sqrt( (x2 - x1) * (x2 - x1) + ( y2 - y1) * (y2 - y1) );
        b = sqrt( (x3 - x1) * (x3 - x1) + ( y3 - y1) * (y3 - y1) );
        c = sqrt( (x2 - x3) * (x2 - x3) + ( y2 - y3) * (y2 - y3) );
        if ( (a + b) > c )
        {
            if ( (a + c) > b )
            {
                if ((b + c) > a )
                {
                    double k = (a + b + c) / 2.0;
                    double s = sqrt( k * (k - a) * (k - b) * (k - c));
                    printf("%.2lf %.2lf", k, s);
                }
                else
                {
                    printf("Impossible");
                }
            }
            else
            {
                printf("Impossible");
            }
        }
        else
        {
            printf("Impossible");
        }
    }
    return 0;
}