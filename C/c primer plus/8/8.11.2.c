#include <stdio.h>

int ch;
int cols = 0;
int num = 0;

int main(void)
{
    while((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            printf("\\n   %d",ch);
        }
        else if(ch == '\t')
        {
            printf("\\t   %d",ch);
        }
        else
        {
            putchar(ch);
            printf("   %d",ch);
        }
        cols++;
        if (cols == 9)
        {
            printf("\n");
            cols = 0;
        }
    }
    return 0;
}