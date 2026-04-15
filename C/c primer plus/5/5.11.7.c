#include <stdio.h>

double num;

void input(double n);

int main(void)
{
    printf("Enter the a double:");
    scanf("%lf",&num);
    input(num);
    return 0;
}

void input(double n)
{
    printf("cube: %lf",n*n*n);
}