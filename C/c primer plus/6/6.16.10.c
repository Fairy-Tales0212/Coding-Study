#include <stdio.h>

int min,max,squ_o,squ_t,num,sum;

void cal (int x,int y);

int main (void)
{
    printf("Enter lwoer and upper integer limits:");
    scanf("%d %d",&min,&max);
    cal (min,max);
    while(printf("Enter next set of limits:"),scanf("%d %d",&min,&max),min < max)
    {
        cal (min,max);
    }
    printf("Done");
    return 0;
}

void cal (int x,int y)
{
    squ_o = x*x;
    squ_t = y*y;
    int z = y-x;
    for (sum =0;0 <= z;z--)
    {
        num = y -z;
        sum += num*num;   
    }
    printf("The sums of the square from %d to %d is %d\n",squ_o,squ_t,sum);
}