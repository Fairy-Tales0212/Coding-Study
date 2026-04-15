#include <stdio.h>
#define NUM 200

int num = 7;
char ch;
char ar[NUM];

void get(char*ar, int n);

int main(void)
{
    get(ar,num);
    printf("%s",ar);
    return 0;
}

void get(char*ar, int n)
{
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i > n)
        {
            break;
        }
        if (ch != ' ')
        {
            ar[i] = ch;
            i++;
        }
        else 
        {
            if (i > 0 && ch == ' ')
            {
                break;
            }
        }
    }
}