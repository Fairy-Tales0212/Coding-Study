#include <stdio.h>
#include <string.h>

void one(void);
void two(void);
void three(void);
void four(void);

char f_name[10];
char s_name[10];
int f_num;
int s_num;

int main(void)
{
    printf("What's your name?\n");
    scanf("%s %s",&f_name,&s_name);
    f_num = strlen(f_name) + 3;
    s_num = strlen(s_name) + 3;
    one();
    two();
    three();
    four();
    return 0;
}

void one(void)
{
    printf("\"Your first name is %s\"\n",f_name);
    printf("\"Your second name is %s\"\n",s_name);
}

void two(void)
{
    printf("\"Your first name is %20s\"\n",f_name);
    printf("\"Your second name is %20s\"\n",s_name);
}

void three(void)
{
    printf("\"Your first name is %-20s\"\n",f_name);
    printf("\"Your second name is %-20s\"\n",s_name);
}

void four(void)
{
    printf("Your first name is %*s\n",f_num,f_name);
    printf("Your second name is %*s\n",s_num,s_name);
}