#include <stdio.h>

void chline (char x, int y, int z);
char ch;
int i,j;

int main (void)
{
    printf("Enter characters to be printed:");
    scanf("%c",&ch);
    printf("Enter number of lines to print:");
    scanf("%d",&i);
    printf("Enter number of columns to print:");
    scanf("%d",&j);
    chline (ch, i, j);
    return 0;
}

void chline (char x,int y,int z)
{
    int i,u;
    for (i = 1;i <= y;i++)
    {
        for (u = 1 ;u <= z;u++)
        {
            putchar(x);
        }
        putchar('\n');
    }
}
