#include <stdio.h>

int spa,ent,oth;
char lat;

int main (void)
{
    spa = 0;
    ent = 0;
    oth = 0;
    while ((lat = getchar()) != '#')
    {
        if (lat == ' ')
        {
            spa++;
        }
        else if (lat == '\n')
        {
            ent++;
        }
        else
        {
            oth++;
        }
    }
    printf("space: %d\n",spa);
    printf("enter: %d\n",ent);
    printf("other: %d",oth);
    return 0;
}