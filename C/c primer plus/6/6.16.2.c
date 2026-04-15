#include <stdio.h>

int num;
int sum;

int main(void)
{
    for (num = 1;num < 6;num++)
    {
        for (sum = 0;sum < num;sum++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}