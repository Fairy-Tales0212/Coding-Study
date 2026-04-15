#include<stdio.h>

void overflow(void);
void underflow(void);

int main(void)
{
    overflow();
    underflow();
    return 0;
}

void overflow(void)
{
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n",toobig);
}

void underflow(void)
{
    float toosmart = 0.1234E-2/10;
    printf("%f\n",toosmart);
}