#include <stdio.h>

double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];

void copy_arr(double ar1[5],double ar[5],int num);
void copy_ptr(double ar1[5],double ar[5],int num);
void copy_ptrs(double ar1[5],double ar[5],double*num);

int main(void)
{
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source + 5);
    return 0;
}

void copy_arr(double ar1[5],double ar[5],int num)
{
    int i;
    for (i = 0;i < num;i++)
    {
        ar1[i] = ar [i];
    }
}

void copy_ptr(double ar1[5],double ar[5],int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        *(ar1 + i) = *(ar + i);
    }
}

void copy_ptrs(double ar1[5], double ar[5], double*num)
{
    int i;
    for (i = 0; i <= num-ar; i++)
    {
        *(ar1 + i) = *(ar + i);
    }
}