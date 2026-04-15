#include <stdio.h>

#define LAT 'a'
#define NUM 10

int i;
char ar1[NUM];

int cont(char lat, char*ar1);

int main(void)
{
    while (fgets(ar1,NUM + 1,stdin))
    {
        i = cont(LAT, ar1);
        printf("%d\n",i);
    }
    return 0;
}

int cont(char lat, char*ar1)
{
    int n;
    for (int i = 0;i < NUM; i++)
    {
        if (ar1[i] == lat)
        {
            n = 0;
            break;
        }
        else 
        {
            n = 1;
        }
    }
    return n;
}