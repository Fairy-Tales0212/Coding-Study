#include <stdio.h>

int upper(int x);
int lower(int x);

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int x = n, i = 1;
        while (x != 495)
        {
            int min,max;
            min = upper(x);
            max = lower(x);
            x = max - min;
            printf("%d: %d - %d = %d\n", i, max, min, x);
            i++;
        }
        printf("\n");
    }
    return 0;
}

int upper(int x)
{
    int min;
    char str[4];
    if (x < 10)
    {
        min = x;
    }
    else if (x > 9 && x < 100)
    {
        sprintf(str, "%d", x);
        int a = str[0] - '0';
        int b = str[1] - '0';
        int arr[2] = {a, b};
        if (arr[0] > arr[1])
        {
            int x = arr[0];
            arr[0] = arr[1];
            arr[1] = x;
        }
        min =arr[0] * 10 + arr[1];
    }
    else
    {
        sprintf(str, "%d", x);
        int a = str[0] - '0';
        int b = str[1] - '0';
        int c = str[2] - '0';
        int arr[3] = {a, b, c};
        for (int i1 = 0; i1 < 2; i1++)
        {
            for (int i2 = 1; i2 < 3; i2++)
            {
                if (arr[i1] > arr[i2])
                {
                    int x = arr[i1];
                    arr[i1] = arr[i2];
                    arr[i2] = x;
                }
            }
        }  
        min = arr[0] * 100 + arr[1] * 10 + arr[2];
    }
    return min;
}

int lower(int x)
{
    int max;
    char str[4];
    if (x < 10)
    {
        max = x;
    }
    else if (x > 9 && x < 100)
    {
        sprintf(str, "%d", x);
        int a = str[0] - '0';
        int b = str[1] - '0';
        int arr[3] = {a, b};
        for (int i1 = 0; i1 < 1; i1++)
        {
            for (int i2 = 1; i2 < 2; i2++)
            {
                if (arr[i1] < arr[i2])
                {
                    int x = arr[i1];
                    arr[i1] = arr[i2];
                    arr[i2] = x;
                }
            }
        }  
        max =arr[0] * 100 + arr[1] * 10;
    }
    else
    {
        sprintf(str, "%d", x);
        int a = str[0] - '0';
        int b = str[1] - '0';
        int c = str[2] - '0';
        int arr[3] = {a, b, c};
        for (int i1 = 0; i1 < 2; i1++)
        {
            for (int i2 = 1; i2 < 3; i2++)
            {
                if (arr[i1] < arr[i2])
                {
                    int x = arr[i1];
                    arr[i1] = arr[i2];
                    arr[i2] = x;
                }
            }
        }  
        max = arr[0] * 100 + arr[1] * 10 + arr[2];
    }
    return max;
}