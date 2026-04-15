#include <stdio.h>
#define NUM 7

char st[NUM];
char lat;
char*pt;
int i = 0;

char*inp(char*st);

int main(void)
{
    pt = inp(st);
    printf("%p",pt);
    return 0;
}

char*inp(char*st)
{
    while(lat = getchar(),lat != ' ' && lat != '\n' && lat != '\t' && i < NUM)
    {
        st[i] = lat;
        i++;
    }
    return st;
}