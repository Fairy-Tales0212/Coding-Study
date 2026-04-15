#include <stdio.h>

int ch;
int num = 0;
int aver = 0;
int check = 0;
int word = 1;

int main(void)
{
    while ((ch = getchar()) != EOF)
    {
        if (check == 2)
        {
            check = 0;
        }
        if (ch == '\n')
        {
            continue;
        }
        else
        {
            num++;
        }
        if (check == 1)
        {
            if(ch != ' ')
            {
                word++;
                check = 0;
            }
            else
            {
                check++;
            }
        }
        else if (check == 0 && ch == ' ')
        {
            check++;
        }
    }
    printf("%d %d\n",num,word);
    printf("average: %d",num/word);
    return 0;
}