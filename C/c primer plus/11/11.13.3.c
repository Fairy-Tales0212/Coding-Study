#include <stdio.h>
#define NUM 200

char ch;
char ar[NUM];

void get(char ar[NUM]);

int main(void)
{
    get(ar);
    return 0;
}

void get(char ar[NUM])
{
    int i = 0;
    int n = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
        {
            ar[i] = ch;
            i++;
        }
        else
        {
             if (ch == ' ' && i > 0)
        {
            break;
        }
            continue;
        }
    }
    ar[i+1] = '\0';
}