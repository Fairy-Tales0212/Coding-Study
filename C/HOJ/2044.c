#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int c;
    c = a % 2;
    printf("%d", c);
    if (c == 1 || c == -1)
    {
        printf("odd");
    }
    else if (c == 0)
    {
        printf("even");
    }
    return 0;
}