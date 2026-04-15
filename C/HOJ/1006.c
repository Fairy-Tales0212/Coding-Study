#include <stdio.h>

int main(void)
{
    int num_1;
    scanf("%d", &num_1);
    for(int io = 0; io < num_1; io++)
    {
        int num_2, a;
        int sum = 0;
        scanf("%d", &num_2);
        for(int it = 0; it < num_2; it++)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}