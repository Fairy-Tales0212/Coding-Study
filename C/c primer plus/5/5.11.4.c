#include <stdio.h>

float cm,inch,feet;

int main(void)
{
    while (printf("Enter a height in centimeterd:"),scanf("%f",&cm),cm > 0)
    {
        inch = cm / 2.54;
        feet = inch / 12;
        printf("%.2f cm = %.2f feet, %.2f inches\n",cm,feet,inch);
    }
    printf("End of Program");
    return 0;
}