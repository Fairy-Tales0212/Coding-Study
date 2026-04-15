#include <stdio.h>
#define NUM 7

char ar[NUM];
char*pt;

char*inp(char*st);

int main(void)
{
    pt = inp(ar);
    printf("%p",pt);
    return 0;
}

char*inp(char*st)
{
    fgets(st,NUM - 1,stdin);
    return st;
}