#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;
    int s;
    while ( 3 == scanf( "%d%c%d", &a, &ch, &b))
    {
        if (ch == '+') 
        {
            s = a + b;
            printf("%d\n", s);
        }
        else if (ch == '-')
        {
            s = a - b;
            printf("%d\n", s);
        }
        else if (ch == '*')
        {
            s = a * b;
            printf("%d\n", s);
        }
        else if (ch == '%')
        {
            s = a % b;
            printf("%d\n", s);
        }
        else if (ch == '/')
        {
            if (b == 0)
            {
                printf("Divisor can not be 0\n");
            }
            else
            {
                s = a / b;
                printf("%d\n", s);
            }
        }
        else
        {
            printf("Unknown operator\n");
        }
    }
    return 0;
}