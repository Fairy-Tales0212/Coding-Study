#include <stdio.h>

char f_name[10];
char s_name[10];

int main(void)
{
    printf("What's your name?");
    scanf("%s %s",&f_name,&s_name);
    printf("Your first name is %s\n",f_name);
    printf("And your second name is %s\n",s_name);
    return 0;
}