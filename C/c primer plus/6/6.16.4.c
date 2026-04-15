#include <stdio.h>

char letter = 'A';
int num,sum;

int main (void)
{
    for (num = 0;num < 6;num++)
    {
        sum = num;
        for (;0 <= sum;sum--)
        {
            printf("%c",letter);
            letter += 1;
        }
        printf("\n");
    } 
    return 0;
}