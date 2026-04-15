#include <stdio.h>
 
char name[10];
float inch;

void massage(void);

int main(void)
{
    printf("What's your name ?\n");
    scanf("%s",&name);
    printf("What's your feet tall ?\n");
    scanf("%f",&inch);
    massage();
    return 0;
}

void massage(void)
{
    printf("%s, you are %.3f feet tall",name,inch);
}
