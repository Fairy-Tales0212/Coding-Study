#include <stdio.h>

char lets[26];
int num;

int main(void)
{
    for (num = 0;num < 26;num++)
    {
        lets[num] +=num +  'a';
        printf("%c",lets[num]);
    }
    return 0;
}