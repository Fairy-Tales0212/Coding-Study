#include <stdio.h>

int num;
char let,sim;

int main(void)
{
    for (num = 0;num < 6;num++)
    {
        sim = 'F'-num;
        for (let = 'F';sim <= let;let--)
        {
            printf("%c",let);
        }
        printf("\n");
    }
    return 0;
}