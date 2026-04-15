#include <stdio.h>

int num = 0;

void pri(void);

int main(void)
{
    int rows = 0,cols = 0;

    printf("Enter two number");
    scanf("%d %d",&rows, &cols);

    for (int n1 = 0; n1 < rows; n1++)
    {
        for (int n2 = 0; n2 < cols; n2++)
        {
            pri();
        }
        printf("\n");
    }

    printf("\nnumber:%d",num);

    return 0;
}

void pri()
{
    printf("#");
    num++;
}