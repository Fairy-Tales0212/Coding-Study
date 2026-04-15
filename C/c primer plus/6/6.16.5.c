#include <stdio.h>

char lets[26];
int rows,col,num;
char let;

void space(int x,int y);
void up(int x);
void down(int x,char let);

int main(void)
{
     
    printf("Enter the Capital letter:");
    scanf("%c",&let);
    rows = let - 'A' + 1;
    col = (let - 'A') * 2 + 1;
    for (num = 1;num <= rows;num++)
    {
        space(num,rows);
        up(num);
        down(num,let);
        space(num,rows);
        printf("\n");
    }
    return 0;
}

void space(int x,int y)
{
    int z = y - x;
    for (;0 <= z;z--)
    {
        printf(" ");
    }
}

void up(int x)
{
    int z = x;
    char y = 'A';
    for (;0 < z;z--)
    {
        printf("%c",y);
        y += 1;
    }
}

void down(int x,char y)
{
    int z = x - 1;
    for (;0 < z;z--)
    {
        char Y = y - 5 + z;
        printf("%c",Y);
    }
}