#include <stdio.h>
#include <string.h>

char f_name[10];
char s_name[10];
int f_num;
int s_num;

void massage(void);

int main(void)
{
    printf("What's your name?\n");
    scanf("%s %s",f_name,s_name);
    massage();
    return 0;
}

void massage(void)
{
    f_num = strlen(f_name);
    s_num = strlen(s_name);
    printf("%s %s\n",f_name,s_name);
    printf("%*d %*d\n",f_num,f_num,s_num,s_num);
    printf("%s %s\n",f_name,s_name);
    printf("%*d %*d \n",-f_num,f_num,-s_num,s_num);
}