#include <stdio.h>

int dig,sum;
float odd =0;
float en = 0;
float ave_o,ave_e;
float num_o = 0;
float num_e = 0;

int main(void)
{
    while(scanf("%d",&dig),dig != 0)
    {
        
        sum = dig % 2;
        switch (sum)
        {
            case 1:
            {
                num_o++;
                odd += dig;
                break;
            }
            default:
            {
                num_e++;
                en += dig;
            }
        }
    }
    ave_o = odd / num_o;
    ave_e = en / num_e;
    printf("odd number:%.0f  odd average:%.2f\n",num_o,ave_o);
    printf("even number:%.0f even number average:%.2f",num_e,ave_e);
    return 0;
}