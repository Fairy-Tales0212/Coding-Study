#include <stdio.h>

int num = 0;

int main (void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ' && ch != '\n')
        {
            num++;
        }
    }
    printf("char number: %d",num);
    return 0;
}