#include <stdio.h>
#include <ctype.h>

int ch;
int ups = 0;
int lows = 0;

int main(void)
{
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
        {
            ups++;
        }
        else if (islower(ch))
        {
            lows++;
        }
    }
    printf("upper latters: %d",ups);
    printf("\nlower latters: %d",lows);
    return 0;
}