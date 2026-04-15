#include <stdio.h>
#define ROWS 3
#define CALS 4

double ar1[ROWS][CALS] = 
{
    {1.1, 2.1, 3.1, 4.1},
    {1.2, 2.2, 3.2, 4.2},
    {1.3, 2.3, 3.3, 4.3}
};
double ar2[ROWS][CALS];

void copy(double ar1[][CALS], double ar2[][CALS]);
void pri(double ar1[][CALS]);

int main(void)
{
    copy(ar1, ar2);
    pri(ar2);
    return 0;
}

void copy(double ar1[][CALS], double ar2[][CALS])
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < CALS; c++)
        {
            ar2[r][c] = ar1[r][c];
        }
    }
}

void pri(double ar1[][CALS])
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < CALS; c++)
        {
            printf("%.1lf ",ar1[r][c]);
        }
        putchar('\n');
    }
}