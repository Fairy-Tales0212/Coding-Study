#include <stdio.h>

int fir,sec;

void cal(int n);

int main (void)
{
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&sec);
    printf("Now enter the first operand:");
    scanf("%d",&fir);
    printf("%d %% %d is %d\n",fir,sec,fir % sec);
    cal(sec);
    return 0;
}

void cal(int n)
{
    while (printf("Enter next number for first operand (<= 0 to quit):"),scanf("%d",&fir),fir > 0)
    {
        printf("%d %% %d is %d\n",fir,sec,fir % sec);
    }
    printf("Done");
}