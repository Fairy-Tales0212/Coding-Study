#include <stdio.h>

int days,weeks,day;

int main(void)
{
    while (printf("Enter number of days(progarm ends when the value is not positive):"),scanf("%d",&days),days > 0)
    {
        weeks = days/7;
        day = days%7;
        printf("%d days are %d weeks , %d days\n",days,weeks,day);
    }
}