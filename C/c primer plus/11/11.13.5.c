#include <stdio.h>

#define AS 'l'
#define NUM 10

char ar[NUM];
char*pt;

char*cont(char ar1[], char lat);

int main(void)
{
    while (fgets(ar,NUM + 1,stdin))
    {
        pt = cont(ar, AS);
        printf("%p\n",pt);
    }
    return 0;
}

char*cont(char ar1[], char lat)
{
    char*n;
    for (int i = 0;i < NUM; i++)
    {
        if (ar1[i] == lat)
        {
            n = ar1 + i;
            break;
        }
        else
        {
            n = NULL;
        }
    }
    return n;
}