#include <stdio.h>

float size;
float speed;
float times;

void data(void);
void time(void);

int main(void)
{
    data();
    time();
    return 0;
}

void data(void)
{
    printf("document size:");
    scanf("%f",&size);    
    printf("download speed:");
    scanf("%f",&speed);
}

void time(void)
{
    times = size / speed;
    printf("time:%fs",times);
}