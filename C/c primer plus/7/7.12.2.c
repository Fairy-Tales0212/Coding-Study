#include <stdio.h>

char lat;
int num,col;

int main(void)
{
    while ((lat = getchar()) != '#')
    {
        putchar(lat);
        printf(" %d ",lat);
        if (col == 8)
        {
            printf("\n");
            col = 0;
        }
        else
        {
            col++;
        }
    }
    return 0;
}